#include <cstdlib>
#include <ctime>
#include <iostream>

//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTORS
//==============================
Bacterie::Bacterie() {
	Aout_ = 50.0;
	A_ = 0.0;
	B_ = 0.0;
	Bout_=0.0;
	Cout_=0.0;
	w_ = 0;
	RAA = 0.1;
	RAB = 0.1;
	RBB = 0.1;
	RBC = 0.1;
	Wmin = 0.001;
	type = " ";
}

//==============================
//    DESTRUCTOR
//==============================
Bacterie::~Bacterie() {
}

//==============================
//    PUBLIC METHODS
//==============================

