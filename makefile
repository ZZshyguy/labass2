Craps : Labass2.o
	g++ Labass2.o -o Craps


Labass2.o : Labass2.cpp
	g++ -c Labass2.cpp

clean:
	rm *.o Labass2
