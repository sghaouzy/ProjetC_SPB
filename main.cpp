//==============================
//    INCLUDES
//==============================

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include "Envir.h"
#include "Case.h"
#include "Bacterie.h"
#include "BactA.h"
#include "BactB.h"


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

//Lancement d'un pas de temps de simulation
envir.run();

  return EXIT_SUCCESS;
}
