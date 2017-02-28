//==============================
//    INCLUDES
//==============================
#include "Envir.h"
#include "Bacterie.h"
#include "BactA.h"
#include"BactB.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>

//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTORS
//==============================
Envir::Envir(){
	longueur = 10;
	A_init_ = 50;
	Bacterie *list_bact[longueur];
	Case *list_case[longueur];
	D = 0.1;
}
//==============================
//    DESTRUCTOR
//==============================
Envir::~Envir(){
}



//==============================
//    DESTRUCTOR
//==============================

//==============================
//    PUBLIC METHODS
//==============================
void Envir::init_bact(){
	list_bact[0] = new BactA();
	for(int it=0; it<=longueur/2-1; it++){
		list_bact[2*it] = new BactA();
		list_bact[2*it+1] = new BactB();		
	}
	printf("%f",list_bact[8]->Aout());
	
}

void Envir::sup_bact(){

	for(int it=1; it<longueur; it++){
		delete list_bact[it];
	}
}


void Envir::init_case(){
	for(int it=0; it<=longueur; it++){
		list_case[it] = new Case();
	}
}

void Envir::sup_case(){
	for(int it=1; it<longueur; it++){
		delete list_case[it];
	}
}

//void Envir::diffusion(){
	//for(int it=0; it<=longueur;it++){
		//Cas de l'extrémité gauche de l'environnement
	//	if (it=0){
	//		for(int i=0; i<=1;i++){
	//			list_case[it]->Aout() = list_case[it]->Aout()+D*list_case[it+i]->Aout();
	//			list_case[it]->Bout() = list_case[it]->Bout()+D*list_case[it+i]->Bout();
	//			list_case[it]->Cout() = list_case[it]->Cout()+D*list_case[it+i]->Cout();
	//		}
	//	}
		
		//Cas de l'extrémité droite de l'environnement
		//if (it=longueur){
		//	for(int i=-1; i<=0;i++){
		//		list_case[it]->Aout() = list_case[it]->Aout()+D*list_case[it+i]->Aout();
		//		list_case[it]->Bout() = list_case[it]->Bout()+D*list_case[it+i]->Bout();
		//		list_case[it]->Cout() = list_case[it]->Cout()+D*list_case[it+i]->Cout();
		//	}
		//}

		//Cas de l'intérieur de l'environnement
		//else {
		//	for(int i=-1; i<=1;i++){
		//		list_case[it]->Aout() = list_case[it]->Aout()+D*list_case[it+i]->Aout();
		//		list_case[it]->Bout() = list_case[it]->Bout()+D*list_case[it+i]->Bout();
		//		list_case[it]->Cout() = list_case[it]->Cout()+D*list_case[it+i]->Cout();
		//	}
		//}


	//}
//}


void Envir::run(){
	for(int it=0; it<=longueur/2-1;it++){
		//Mort des bactéries
		if (list_bact[it]->death()==1) delete list_bact[it];
		if (list_bact[it]->type_()=="L") list_bact[it]->adaptation(A_init_);
		else list_bact[it]->adaptation(0);
	}
}

