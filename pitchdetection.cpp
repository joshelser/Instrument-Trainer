#include <iostream>
#include <aubio/aubio.h>
#include <aubio/pitchdetection.h>
#include <aubio/jackio.h>

using namespace std;

/* Values for pitchdetection object */
aubio_pitchdetection_type detection_type = aubio_pitch_fcomb;
aubio_pitchdetection_mode detection_mode = aubio_pitchm_midi;
uint_t buffer_size = 1024;
uint_t overlap_size = 256;
uint_t channels = 2;
uint_t samplerate = 44100;

smpl_t pitch = 0.;

static void process_print (void) {
    cout << pitch << endl;
    //outmsg("%f\n",pitch);
}

int main (int argc, char **argv)
{
    aubio_pitchdetection_t *pitchdetect = new_aubio_pitchdetection (buffer_size, overlap_size, channels, samplerate, detection_type, detection_mode);

    fvec_t *fvec = new_fvec(1, channels);

    aubio_jack_t *jack_setup;
    jack_setup = new_aubio_jack(channels, channels,  (aubio_process_func_t)process_print);
    sleep (50000);

    return 0;
}
