#include <iostream>
#include <cstdlib>

#include <aubio/aubio.h>
#include <aubio/sndfileio.h>
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

// Already declared
//uint_t overlap_size = 256;

smpl_t pitch = 0.;

fvec_t *ibuf;
fvec_t *obuf;

static void process_print (void) {
    cout << "Current pitch: " << pitch << endl;
    //outmsg("%f\n",pitch);
}

int main (int argc, char **argv)
{
    aubio_pitchdetection_t *pitchdetect = new_aubio_pitchdetection (buffer_size, overlap_size, channels, samplerate, detection_type, detection_mode);

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
    jack_setup = new_aubio_jack(channels, channels,  (aubio_process_func_t)process_print);
    aubio_jack_activate(jack_setup);
    pause();
    aubio_jack_close (jack_setup);
    /* end func */

    sleep (5);

    return 0;
}
