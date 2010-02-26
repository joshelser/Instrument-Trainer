/*
  Copyright (C) 2003-2009 Paul Brossier <piem@aubio.org>

  This file is part of aubio.

  aubio is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  aubio is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with aubio.  If not, see <http://www.gnu.org/licenses/>.

*/

/* see in mathutils.h for doc */

#include "aubio_priv.h"
#include "fvec.h"
#include "mathutils.h"
#include "musicutils.h"
#include "config.h"


/** Window types */
typedef enum
{
  aubio_win_rectangle,
  aubio_win_hamming,
  aubio_win_hanning,
  aubio_win_hanningz,
  aubio_win_blackman,
  aubio_win_blackman_harris,
  aubio_win_gaussian,
  aubio_win_welch,
  aubio_win_parzen,
  aubio_win_default = aubio_win_hanningz,
} aubio_window_type;

fvec_t *
new_aubio_window (char_t * window_type, uint_t size)
{
  // create fvec of size x 1 channel
  fvec_t * win = new_fvec( size, 1);
  smpl_t * w = win->data[0];
  uint_t i;
  aubio_window_type wintype;
  if (strcmp (window_type, "rectangle") == 0)
      wintype = aubio_win_rectangle;
  else if (strcmp (window_type, "hamming") == 0)
      wintype = aubio_win_hamming;
  else if (strcmp (window_type, "hanning") == 0)
      wintype = aubio_win_hanning;
  else if (strcmp (window_type, "hanningz") == 0)
      wintype = aubio_win_hanningz;
  else if (strcmp (window_type, "blackman") == 0)
      wintype = aubio_win_blackman;
  else if (strcmp (window_type, "blackman_harris") == 0)
      wintype = aubio_win_blackman_harris;
  else if (strcmp (window_type, "gaussian") == 0)
      wintype = aubio_win_gaussian;
  else if (strcmp (window_type, "welch") == 0)
      wintype = aubio_win_welch;
  else if (strcmp (window_type, "parzen") == 0)
      wintype = aubio_win_parzen;
  else if (strcmp (window_type, "default") == 0)
      wintype = aubio_win_default;
  else {
      AUBIO_ERR ("unknown window type %s, using default.\n", window_type);
      wintype = aubio_win_default;
      return NULL;
  }
  switch(wintype) {
    case aubio_win_rectangle:
      for (i=0;i<size;i++)
        w[i] = 0.5;
      break;
    case aubio_win_hamming:
      for (i=0;i<size;i++)
        w[i] = 0.54 - 0.46 * COS(TWO_PI * i / (size));
      break;
    case aubio_win_hanning:
      for (i=0;i<size;i++)
        w[i] = 0.5 - (0.5 * COS(TWO_PI * i / (size)));
      break;
    case aubio_win_hanningz:
      for (i=0;i<size;i++)
        w[i] = 0.5 * (1.0 - COS(TWO_PI * i / (size)));
      break;
    case aubio_win_blackman:
      for (i=0;i<size;i++)
        w[i] = 0.42
          - 0.50 * COS(    TWO_PI*i/(size-1.0))
          + 0.08 * COS(2.0*TWO_PI*i/(size-1.0));
      break;
    case aubio_win_blackman_harris:
      for (i=0;i<size;i++)
        w[i] = 0.35875
          - 0.48829 * COS(    TWO_PI*i/(size-1.0))
          + 0.14128 * COS(2.0*TWO_PI*i/(size-1.0))
          - 0.01168 * COS(3.0*TWO_PI*i/(size-1.0));
      break;
    case aubio_win_gaussian:
      for (i=0;i<size;i++)
        w[i] = EXP(- 1.0 / SQR(size) * SQR(2.0*i-size));
      break;
    case aubio_win_welch:
      for (i=0;i<size;i++)
        w[i] = 1.0 - SQR((2*i-size)/(size+1.0));
      break;
    case aubio_win_parzen:
      for (i=0;i<size;i++)
        w[i] = 1.0 - ABS((2*i-size)/(size+1.0));
      break;
    default:
      break;
  }
  return win;
}

smpl_t
aubio_unwrap2pi (smpl_t phase)
{
  /* mod(phase+pi,-2pi)+pi */
  return phase + TWO_PI * (1. + FLOOR (-(phase + PI) / TWO_PI));
}

smpl_t
fvec_mean (fvec_t * s)
{
  uint_t i, j;
  smpl_t tmp = 0.0;
  for (i = 0; i < s->channels; i++)
    for (j = 0; j < s->length; j++)
      tmp += s->data[i][j];
  return tmp / (smpl_t) (s->length);
}

smpl_t
fvec_mean_channel (fvec_t * s, uint_t i)
{
  uint_t j;
  smpl_t tmp = 0.0;
  for (j = 0; j < s->length; j++)
      tmp += s->data[i][j];
  return tmp / (smpl_t) (s->length);
}

smpl_t
fvec_sum (fvec_t * s)
{
  uint_t i, j;
  smpl_t tmp = 0.0;
  for (i = 0; i < s->channels; i++) {
    for (j = 0; j < s->length; j++) {
      tmp += s->data[i][j];
    }
  }
  return tmp;
}

smpl_t
fvec_max (fvec_t * s)
{
  uint_t i, j;
  smpl_t tmp = 0.0;
  for (i = 0; i < s->channels; i++) {
    for (j = 0; j < s->length; j++) {
      tmp = (tmp > s->data[i][j]) ? tmp : s->data[i][j];
    }
  }
  return tmp;
}

smpl_t
fvec_min (fvec_t * s)
{
  uint_t i, j;
  smpl_t tmp = s->data[0][0];
  for (i = 0; i < s->channels; i++) {
    for (j = 0; j < s->length; j++) {
      tmp = (tmp < s->data[i][j]) ? tmp : s->data[i][j];
    }
  }
  return tmp;
}

uint_t
fvec_min_elem (fvec_t * s)
{
  uint_t i, j, pos = 0.;
  smpl_t tmp = s->data[0][0];
  for (i = 0; i < s->channels; i++) {
    for (j = 0; j < s->length; j++) {
      pos = (tmp < s->data[i][j]) ? pos : j;
      tmp = (tmp < s->data[i][j]) ? tmp : s->data[i][j];
    }
  }
  return pos;
}

uint_t
fvec_max_elem (fvec_t * s)
{
  uint_t i, j, pos = 0;
  smpl_t tmp = 0.0;
  for (i = 0; i < s->channels; i++) {
    for (j = 0; j < s->length; j++) {
      pos = (tmp > s->data[i][j]) ? pos : j;
      tmp = (tmp > s->data[i][j]) ? tmp : s->data[i][j];
    }
  }
  return pos;
}

void
fvec_shift (fvec_t * s)
{
  uint_t i, j;
  for (i = 0; i < s->channels; i++) {
    for (j = 0; j < s->length / 2; j++) {
      ELEM_SWAP (s->data[i][j], s->data[i][j + s->length / 2]);
    }
  }
}

smpl_t
fvec_local_energy (fvec_t * f)
{
  smpl_t energy = 0.;
  uint_t i, j;
  for (i = 0; i < f->channels; i++) {
    for (j = 0; j < f->length; j++) {
      energy += SQR (f->data[i][j]);
    }
  }
  return energy;
}

smpl_t
fvec_local_hfc (fvec_t * v)
{
  smpl_t hfc = 0.;
  uint_t i, j;
  for (i = 0; i < v->channels; i++) {
    for (j = 0; j < v->length; j++) {
      hfc += (i + 1) * v->data[i][j];
    }
  }
  return hfc;
}

void
fvec_min_removal (fvec_t * v)
{
  smpl_t v_min = fvec_min (v);
  fvec_add (v,  - v_min );
}

smpl_t
fvec_alpha_norm (fvec_t * o, smpl_t alpha)
{
  uint_t i, j;
  smpl_t tmp = 0.;
  for (i = 0; i < o->channels; i++) {
    for (j = 0; j < o->length; j++) {
      tmp += POW (ABS (o->data[i][j]), alpha);
    }
  }
  return POW (tmp / o->length, 1. / alpha);
}

void
fvec_alpha_normalise (fvec_t * o, smpl_t alpha)
{
  uint_t i, j;
  smpl_t norm = fvec_alpha_norm (o, alpha);
  for (i = 0; i < o->channels; i++) {
    for (j = 0; j < o->length; j++) {
      o->data[i][j] /= norm;
    }
  }
}

void
fvec_add (fvec_t * o, smpl_t val)
{
  uint_t i, j;
  for (i = 0; i < o->channels; i++) {
    for (j = 0; j < o->length; j++) {
      o->data[i][j] += val;
    }
  }
}

void fvec_adapt_thres(fvec_t * vec, fvec_t * tmp,
    uint_t post, uint_t pre, uint_t channel) {
  uint_t length = vec->length, i=channel, j;
  for (j=0;j<length;j++) {
    vec->data[i][j] -= fvec_moving_thres(vec, tmp, post, pre, j, i);
  }
}

smpl_t
fvec_moving_thres (fvec_t * vec, fvec_t * tmpvec,
    uint_t post, uint_t pre, uint_t pos, uint_t channel)
{
  uint_t i = channel, k;
  smpl_t *medar = (smpl_t *) tmpvec->data[i];
  uint_t win_length = post + pre + 1;
  uint_t length = vec->length;
  /* post part of the buffer does not exist */
  if (pos < post + 1) {
    for (k = 0; k < post + 1 - pos; k++)
      medar[k] = 0.;            /* 0-padding at the beginning */
    for (k = post + 1 - pos; k < win_length; k++)
      medar[k] = vec->data[0][k + pos - post];
    /* the buffer is fully defined */
  } else if (pos + pre < length) {
    for (k = 0; k < win_length; k++)
      medar[k] = vec->data[0][k + pos - post];
    /* pre part of the buffer does not exist */
  } else {
    for (k = 0; k < length - pos + post; k++)
      medar[k] = vec->data[0][k + pos - post];
    for (k = length - pos + post; k < win_length; k++)
      medar[k] = 0.;            /* 0-padding at the end */
  }
  return fvec_median_channel (tmpvec, i);
}

smpl_t fvec_median_channel (fvec_t * input, uint_t channel) {
  uint_t n = input->length;
  smpl_t * arr = (smpl_t *) input->data[channel];
  uint_t low, high ;
  uint_t median;
  uint_t middle, ll, hh;

  low = 0 ; high = n-1 ; median = (low + high) / 2;
  for (;;) {
    if (high <= low) /* One element only */
      return arr[median] ;

    if (high == low + 1) {  /* Two elements only */
      if (arr[low] > arr[high])
        ELEM_SWAP(arr[low], arr[high]) ;
      return arr[median] ;
    }

    /* Find median of low, middle and high items; swap into position low */
    middle = (low + high) / 2;
    if (arr[middle] > arr[high])    ELEM_SWAP(arr[middle], arr[high]);
    if (arr[low]    > arr[high])    ELEM_SWAP(arr[low],    arr[high]);
    if (arr[middle] > arr[low])     ELEM_SWAP(arr[middle], arr[low]) ;

    /* Swap low item (now in position middle) into position (low+1) */
    ELEM_SWAP(arr[middle], arr[low+1]) ;

    /* Nibble from each end towards middle, swapping items when stuck */
    ll = low + 1;
    hh = high;
    for (;;) {
      do ll++; while (arr[low] > arr[ll]) ;
      do hh--; while (arr[hh]  > arr[low]) ;

      if (hh < ll)
        break;

      ELEM_SWAP(arr[ll], arr[hh]) ;
    }

    /* Swap middle item (in position low) back into correct position */
    ELEM_SWAP(arr[low], arr[hh]) ;

    /* Re-set active partition */
    if (hh <= median)
      low = ll;
    if (hh >= median)
      high = hh - 1;
  }
}

smpl_t fvec_quadint (fvec_t * x, uint_t pos, uint_t i) {
  smpl_t s0, s1, s2;
  uint_t x0 = (pos < 1) ? pos : pos - 1;
  uint_t x2 = (pos + 1 < x->length) ? pos + 1 : pos;
  if (x0 == pos) return (x->data[i][pos] <= x->data[i][x2]) ? pos : x2;
  if (x2 == pos) return (x->data[i][pos] <= x->data[i][x0]) ? pos : x0;
  s0 = x->data[i][x0];
  s1 = x->data[i][pos];
  s2 = x->data[i][x2];
  return pos + 0.5 * (s2 - s0 ) / (s2 - 2.* s1 + s0);
}

uint_t fvec_peakpick(fvec_t * onset, uint_t pos) {
  uint_t i=0, tmp=0;
  /*for (i=0;i<onset->channels;i++)*/
  tmp = (onset->data[i][pos] > onset->data[i][pos-1]
      &&  onset->data[i][pos] > onset->data[i][pos+1]
      &&  onset->data[i][pos] > 0.);
  return tmp;
}

smpl_t
aubio_quadfrac (smpl_t s0, smpl_t s1, smpl_t s2, smpl_t pf)
{
  smpl_t tmp =
      s0 + (pf / 2.) * (pf * (s0 - 2. * s1 + s2) - 3. * s0 + 4. * s1 - s2);
  return tmp;
}

smpl_t
aubio_freqtomidi (smpl_t freq)
{
  /* log(freq/A-2)/log(2) */
  smpl_t midi = freq / 6.875;
  midi = LOG (midi) / 0.69314718055995;
  midi *= 12;
  midi -= 3;
  return midi;
}

smpl_t
aubio_miditofreq (smpl_t midi)
{
  smpl_t freq = (midi + 3.) / 12.;
  freq = EXP (freq * 0.69314718055995);
  freq *= 6.875;
  return freq;
}

smpl_t
aubio_bintofreq (smpl_t bin, smpl_t samplerate, smpl_t fftsize)
{
  smpl_t freq = samplerate / fftsize;
  return freq * bin;
}

smpl_t
aubio_bintomidi (smpl_t bin, smpl_t samplerate, smpl_t fftsize)
{
  smpl_t midi = aubio_bintofreq (bin, samplerate, fftsize);
  return aubio_freqtomidi (midi);
}

smpl_t
aubio_freqtobin (smpl_t freq, smpl_t samplerate, smpl_t fftsize)
{
  smpl_t bin = fftsize / samplerate;
  return freq * bin;
}

smpl_t
aubio_miditobin (smpl_t midi, smpl_t samplerate, smpl_t fftsize)
{
  smpl_t freq = aubio_miditofreq (midi);
  return aubio_freqtobin (freq, samplerate, fftsize);
}

uint_t
aubio_is_power_of_two (uint_t a)
{
  if ((a & (a - 1)) == 0) {
    return 1;
  } else {
    return 0;
  }
}

uint_t
aubio_next_power_of_two (uint_t a)
{
  uint_t i;
  a--;
  for (i = 0; i < sizeof (uint_t) * CHAR_BIT; i++) {
    a = a | a >> 1;
  }
  return a + 1;
}

smpl_t
aubio_db_spl (fvec_t * o)
{
  smpl_t val = SQRT (fvec_local_energy (o));
  val /= (smpl_t) o->length;
  return LIN2DB (val);
}

uint_t
aubio_silence_detection (fvec_t * o, smpl_t threshold)
{
  return (aubio_db_spl (o) < threshold);
}

smpl_t
aubio_level_detection (fvec_t * o, smpl_t threshold)
{
  smpl_t db_spl = aubio_db_spl (o);
  if (db_spl < threshold) {
    return 1.;
  } else {
    return db_spl;
  }
}

smpl_t
aubio_zero_crossing_rate (fvec_t * input)
{
  uint_t i = 0, j;
  uint_t zcr = 0;
  for (j = 1; j < input->length; j++) {
    // previous was strictly negative
    if (input->data[i][j - 1] < 0.) {
      // current is positive or null
      if (input->data[i][j] >= 0.) {
        zcr += 1;
      }
      // previous was positive or null
    } else {
      // current is strictly negative
      if (input->data[i][j] < 0.) {
        zcr += 1;
      }
    }
  }
  return zcr / (smpl_t) input->length;
}

void
aubio_autocorr (fvec_t * input, fvec_t * output)
{
  uint_t i, j, k, length = input->length;
  smpl_t *data, *acf;
  smpl_t tmp = 0;
  for (k = 0; k < input->channels; k++) {
    data = input->data[k];
    acf = output->data[k];
    for (i = 0; i < length; i++) {
      tmp = 0.;
      for (j = i; j < length; j++) {
        tmp += data[j - i] * data[j];
      }
      acf[i] = tmp / (smpl_t) (length - i);
    }
  }
}

void
aubio_cleanup (void)
{
#if HAVE_FFTW3
  fftw_cleanup ();
#else
#if HAVE_FFTW3F
  fftwf_cleanup ();
#endif
#endif
}