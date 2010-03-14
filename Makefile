all:
	g++ -o pitchdetection pitchdetection.cpp -Wall 

pitchdetection:
	g++ -o pitchdetection pitchdetection.cpp -Wall

clean:
	rm -f pitchdetection *.o
