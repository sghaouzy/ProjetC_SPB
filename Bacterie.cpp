#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Bacterie.h"

//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTORS
//==============================
Bacterie::Bacterie() {
	Aout_ = 0.0;
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
	type = 0;
}

//==============================
//    DESTRUCTOR
//==============================
Bacterie::~Bacterie() {
}

//==============================
//    PUBLIC METHODS
//==============================

