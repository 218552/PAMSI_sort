zad1: main.o tabd.o stoper.o
	g++ -o main.o tabd.o
main.o: main.cpp tabd.o
	g++ -c -o main.o main.cpp
tabd.o: tabd.cpp tabd.h interfejs.h stoper.h
	g++ -c -o tabd.o tabd.cpp
make clean:
	rm *.o
