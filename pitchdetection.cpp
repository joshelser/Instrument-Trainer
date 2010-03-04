#include <iostream>
#include <cstdlib>

#include <aubio/aubio.h>
#include <aubio/sndfileio.h>
#include <aubio/pitchdetection.h>
#include <aubio/pitchyinfft.h>
#include <aubio/jackio.h>

using namespace std;

/* Values for pitchdetection object */
aubio_pitchdetection_type detection_type = aubio_pitch_yinfft;
aubio_pitchdetection_mode detection_mode = aubio_pitchm_freq;
uint_t buffer_size = 1024;
uint_t overlap_size = 256;
uint_t channels = 2;
uint_t samplerate = 44100;

// Already declared
//uint_t overlap_size = 256;

aubio_onset_t *o;

smpl_t pitch = 0.;

unsigned int pos = 0;

aubio_pitchdetection_t *pitchdetect;
fvec_t *ibuf;
fvec_t *obuf;
fvec_t *onset;
fvec_t *pitch_obuf;

static void process_print (void) {
    cout << "Current pitch: " << pitch << endl;
    //outmsg("%f\n",pitch);
}

static int aubio_process (smpl_t **input, smpl_t **output, int nframes)
{
    unsigned int i, j;

    for (j=0;j<(unsigned)nframes;j++) {
        for (i=0;i<channels;i++) {
            /* write input to datanew */
            fvec_write_sample(ibuf, input[i][j], i, pos);
            /* put synthnew in output */
            output[i][j] = fvec_read_sample(obuf, i, pos);
        }

        if (pos == overlap_size-1)
        {
            /* Block loop ?? */
            //aubio_onset_do(o, ibuf, onset);

            //aubio_pitch_do (pitchdetect, ibuf, pitch_obuf);

        }
    }

    return 1;
}

int main (int argc, char **argv)
{
    pitchdetect = new_aubio_pitchdetection (buffer_size, overlap_size, channels, samplerate, detection_type, detection_mode);

    aubio_pitchdetection_set_yinthresh(pitchdetect, 0.7);

    /* example_common_init() */
    aubio_sndfile_t *onsetfile = NULL;
    fvec_t *woodblock = new_fvec(buffer_size, 1);
    onsetfile = new_aubio_sndfile_ro("sounds/woodblock.aiff");

    if (!onsetfile)
    {
        fprintf(stderr, "Could not find sounds/woodblock.aiff\n");
        exit(-1);
    }

    aubio_sndfile_read(onsetfile, overlap_size, woodblock);
    
    ibuf = new_fvec(overlap_size, channels);
    obuf = new_fvec(overlap_size, channels);

    /* end func */

    /* examples_common_process() */

    aubio_jack_t *jack_setup;

    /* Set JACK callback */
    jack_setup = new_aubio_jack(channels, channels,  (aubio_process_func_t)aubio_process);

    aubio_jack_activate(jack_setup);
    
    pause();

    aubio_jack_close (jack_setup);

    /* end func */

    sleep (5);

    (void)process_print();

    return 0;
}
