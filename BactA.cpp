//==============================
//    INCLUDES
//==============================
#include "BactA.h"
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>

//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTOR
//==============================
BactA::BactA(){
	w_=Bout_;
	type=1;
}

//    CONSTRUCTOR
//==============================


//==============================
//    DESTRUCTOR
//==============================

BactA::~BactA(){
}

//==============================
//    PUBLIC METHODS
//==============================

bool BactA::death(){
	float nombre = 0;
        srand(time(NULL));
        nombre = (float)rand() / (float)RAND_MAX;
	if (nombre<=0.02) return true;
	else return false;
}


void BactA::adaptation(float elt_nutritif){
	Aout_ = elt_nutritif-elt_nutritif*RAA;
	A_ = A_+elt_nutritif*RAA-A_*RAB;
	Bout_ = Bout_+A_*RAB;
        w_ = Bout_;
	if (w_< Wmin) w_=0;
}


