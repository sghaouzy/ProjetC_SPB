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
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector

using namespace std;

//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTORS
//==============================
Envir::Envir(){
	longueur = 10;
	largeur = 5;
	A_init_ = 50;
	D = 0.1;
	list_bact = new Bacterie**[longueur];

	for(int it=0; it<longueur; it++){
		list_bact[it] = new Bacterie*[largeur];		
	}

	list_case = new Case**[longueur];

	for(int it=0; it<longueur; it++){
		list_case[it] = new Case*[largeur];		
	}
}
//==============================
//    DESTRUCTOR
//==============================
Envir::~Envir(){
}


//==============================
//    PUBLIC METHODS
//==============================
void Envir::init_bact(){
	
//Première étape : créer le tableau 2 dimensions de 0 et de 1 et le mélanger 
	// random generator function:
int limite=0;
vector<vector<int> > grille;
for (int x=0;x<longueur;x++){
	limite+=1;
	if (limite<longueur/2)
		grille.push_back(vector<int>(largeur,0));   
        else
		grille.push_back(vector<int>(largeur,1));
}
  
  // using built-in random generator:
random_shuffle (grille.begin(), grille.end() );


//Deuxième étape : remplir le tableau de bactéries aléatoirement. Si la position x,y correspond à 1 dans la grille aléatoire alors
//il sera crée un nouveau pointeur sur une BactA, sinon ce sera une BactB.
	
for(int x=0; x<longueur; x++){
	for(int y=0; y<largeur;y++){
			
			if (grille[x][y]==1){
				list_bact[x][y] = new BactA();
			}

			else {
				list_bact[x][y] = new BactB();
			}
		
	}	
}
}



void Envir::init_case(){
	for(int x=0; x<longueur; x++){
		for(int y=0; y<largeur;y++){
			list_case[x][y] = new Case();
		}
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
//Fonction à compléter, ici on teste la survie des bactéries et leur adaptation aux nouvelles concentrations. Il faut finaliser
//la fonction de diffusion et l'inclure dans la fonction run.
	for(int x=0; x<longueur;x++){
		for(int y=0;y<largeur;y++){
		//Mort des bactéries et rediffusion des métabolites dans les cases
        		if (list_bact[x][y]->death()==1){ 
				float A = list_bact[x][y]->Aout();
			        float B = list_bact[x][y]->Bout();
			        float C = list_bact[x][y]->Cout();
			        list_case[x][y]->add_met(A,B,C);
				delete list_bact[x][y];
			}
		//Si vivantes adaptation des métabolites
			else{
         			if (list_bact[x][y]->type_()==1) list_bact[x][y]->adaptation(list_case[x][y]->Aout());
                		else list_bact[x][y]->adaptation(list_case[x][y]->Bout());
				printf("%f %f %f %f\n", list_bact[x][y]->type_(), list_bact[x][y]->Aout(),list_bact[x][y]->A(), list_bact[x][y]->w());
			}
		}
	}
}

