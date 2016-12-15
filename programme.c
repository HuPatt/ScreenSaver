#include <stdlib.h>
#include <stdio.h>
#include <time.h>



	//Variable pour la direction de l'avion.
int direction;
int varx = (80 - sizeof("haut encore")) / 2;
int vary = 24 / 2 ;

	//Declaration des fonctions.
int setPosition();
int afficherAvion();

int Programme() {

	int lancement = 1;

	//Creation de la variable aleatoire pour le positionement de l'avion.
	srand(time(NULL));
 	int pdebut = rand() %4; 
	printf("%d\n", pdebut);

    if (pdebut == 0) direction = 1;
    	else if (pdebut == 1)  direction = 2; 
    	else if (pdebut == 2)  direction = 3; 
    	else if (pdebut == 3)  direction = 4; 
	setPosition(direction);	

  while(lancement == 1) {

	//On recupere la valeur que l'utilisateur a écrit avec "getch.c".
	char input = getch();
    
	//Nous comparons afin de savoir qu'elle est le caractere écrit.
    if (input == 'z') direction = 1 ;
    	else if (input == 's') direction = 2 ;
    	else if (input == 'q') direction = 3 ;
    	else if (input == 'd') direction = 4 ;
    	else if (input == 'x') lancement = 2 ;
    
	setPosition(direction);
  }
  
  return 0;
}





