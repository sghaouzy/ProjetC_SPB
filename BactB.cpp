//==============================
//    INCLUDES
//==============================
#include "BactB.h"
#include "BactA.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>

//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTORS
//==============================
BactB::BactB(){
	w_=Cout_;
	type=2;
}


//==============================
//    DESTRUCTOR
//==============================
BactB::~BactB(){
}

//==============================
//    PUBLIC METHODS
//==============================

bool BactB::death(){
	float nombre = 0;
        srand(time(NULL));
        nombre = (float)rand() / (float)RAND_MAX;
	if (nombre<=0.02) return true;
	else return false;
}


void BactB::adaptation(float elt_nutritif){
	Bout_ = elt_nutritif-elt_nutritif*RBB;
	B_ = B_+elt_nutritif*RBB-B_*RBC;
	Cout_ = Cout_+B_*RBC;
        w_ = Cout_;
	if (w_< Wmin) w_=0;
}
