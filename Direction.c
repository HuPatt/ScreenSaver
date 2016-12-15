#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int setPosition(int vDirection) {

	//Fonction qui va permettre de changer la position de l'avion.
	switch(vDirection) {
	   	case 1 :
    		//Vers le haut.
		if (vary > 0) {
    			vary --;
    			//Si on touche le haut de la console.
    			if (vary == 0) vary = 23;
    		}
    		break;
    	case 2 :
    		//Vers le bas.
    		if (vary <= 23) {
    			vary ++;
    			//Si on touche le bas on l'envoi en haut.
    			if (vary == 23) vary = 0;
    		}
    		break;
    	case 3 : 
    		//Vers la gauche.
    		if (varx > 0) {
 				varx --;
 				//Si on touche le bord gauche nous envoyons l'avion à droite.
 				if  (varx == 0) varx = 80;
 			}
    		break;
    	case 4 :
    	  	//Vers la droite.
		if (varx <= 80) {
				varx ++;
				//Si on touche le bord droite nous envoyons l'avion à gauche.
				if (varx == 80) varx = 1;
			}
    	  	break;
    }
	//Ouverture du fichier "avionaffich.c".
	afficherAvion(vDirection);

	return 0;
}
