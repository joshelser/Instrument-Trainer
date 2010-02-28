pitchdetection:
	g++ -o pitchdetection pitchdetection.cpp -Wall -laubio

clean:
	rm -f pitchdetection *.o
