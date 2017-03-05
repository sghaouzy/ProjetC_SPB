all: main
main: main.o Bacterie.o BactA.o BactB.o Case.o Envir.o
	g++ -std=c++11 main.o Bacterie.o BactA.o BactB.o Case.o Envir.o -o main
main.o: main.cpp Bacterie.h BactA.h BactB.h Case.h Envir.h
	g++ -std=c++11 -c main.cpp -o main.o
Envir.o: Envir.cpp Envir.h
	g++ -std=c++11 -c Envir.cpp -o Envir.o
Case.o: Case.cpp Case.h
	g++ -std=c++11 -c Case.cpp -o Case.o
Bacterie.o: Bacterie.cpp Bacterie.h
	g++ -std=c++11 -c Bacterie.cpp -o Bacterie.o
BactA.o: BactA.cpp BactA.h
	g++ -std=c++11 -c BactA.cpp -o BactA.o
BactB.o: BactB.cpp BactB.h
	g++ -std=c++11 -c BactB.cpp -o BactB.o
