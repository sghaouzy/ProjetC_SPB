//==============================
//    INCLUDES
//==============================

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstring>
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include "Envir.h"
#include "Case.h"
#include "Bacterie.h"
#include "BactA.h"
#include "BactB.h"
using namespace std;


//==============================
//    FUNCTION DeCLARATION
//==============================

//==============================
//    MAIN
//==============================

int main(int argc, char*argv[]){
//Initialisation de l'environnement 
	Envir envir = Envir();

//Initialisation des bactéries
	envir.init_bact();

//Initialisation des cases
	envir.init_case();

//Lancement d'un pas de temps de simulation
	envir.run();

	


//for(int x=0; x<longueur; x++){
//	for(int y=0; y<largeur; y++){
//		delete list_bact[x][y];		
//	}
//}

//for(int x=0; x<longueur; x++){
//	delete [] list_bact[x];
//}

  	return EXIT_SUCCESS;

}
