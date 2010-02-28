#include <aubio/aubio.h>
#include <aubio/pitchdetection.h>

using namespace std;

aubio_pitchdetection_type detection_type = aubio_pitch_fcomb;
aubio_pitchdetection_mode detection_mode = aubio_pitchm_midi;
uint_t buffer_size = 1024;
uint_t overlap_size = 256;
uint_t channels = 2;
uint_t samplerate = 44100;


int main (int argc, char **argv)
{
    aubio_pitchdetection_t *pitchdetect = new_aubio_pitchdetection (buffer_size, overlap_size, channels, samplerate, detection_type, detection_mode);

    return 0;
}
