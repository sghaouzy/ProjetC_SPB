all: main
main: main.o Bacterie.o BactA.o BactB.o Case.o Envir.o
	g++ main.o Bacterie.o BactA.o BactB.o Case.o Envir.o -o main
main.o: main.cpp Bacterie.h BactA.h BactB.h Case.h Envir.h
	g++ -c main.cpp -o main.o
Envir.o: Envir.cpp Envir.h
	g++ -c Envir.cpp -o Envir.o
Case.o: Case.cpp Case.h
	g++ -c Case.cpp -o Case.o
Bacterie.o: Bacterie.cpp Bacterie.h
	g++ -c Bacterie.cpp -o Bacterie.o
BactA.o: BactA.cpp BactA.h
	g++ -c BactA.cpp -o BactA.o
BactB.o: BactB.cpp BactB.h
	g++ -c BactB.cpp -o BactB.o
