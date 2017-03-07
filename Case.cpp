//==============================
//    INCLUDES
//==============================
#include "Case.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>

//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTORS
//==============================
Case::Case(){
	Aout_=50.0;
	Bout_=0.0;
	Cout_=0.0;
}

//==============================
//    DESTRUCTOR
//==============================
Case::~Case(){
}

//==============================
//    PUBLIC METHODS
//==============================

void Case::add_met(float A, float B, float C){
	Aout_+=A;
	Bout_+=B;
	Cout_+=C;
}
