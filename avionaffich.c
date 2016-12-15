#include <stdlib.h>
#include <stdio.h>
#include <time.h>


	//Affichage de l'avion.

int afficherAvion(int affichage) {

	//Appel la fonction pour afficher l'avion.
	system("clear");
	
	char testet[4] = "heu";

	//Permet de deplacer le curseur avec x et y comme valeurs.
	switch(direction) {

		case 1 : {
		//vers le haut.
		printf("\033[%d;%dH", vary, varx);
		printf("  *   \n");
		printf("\033[%d;%dH", vary + 1 , varx);
		printf(" *** \n");
		printf("\033[%d;%dH", vary + 2 , varx);
		printf("  *  \n");
		printf("\033[%d;%dH", vary + 3 , varx);
		printf("  *  \n");
		printf("\033[%d;%dH", vary + 4 , varx);
		printf(" **  \n");
	break;
	} 
		case 2 : {
		//vers le bas.
		printf("\033[%d;%dH", vary, varx); 
		printf("  **\n");
		printf("\033[%d;%dH", vary + 1 , varx); 
		printf("  * \n");
		printf("\033[%d;%dH", vary + 2 , varx);
		printf("  * \n");
		printf("\033[%d;%dH", vary + 3 , varx); 
		printf(" ***\n");
		printf("\033[%d;%dH", vary + 4 , varx);
		printf("  * \n");
	break;
	}
	
		case 3 : {
    		//Vers la gauche.
		printf("\033[%d;%dH", vary, varx); 
		printf("  *  *\n");
		printf("\033[%d;%dH", vary + 1 , varx); 
		printf(" *****\n");
		printf("\033[%d;%dH", vary + 2 , varx); 
		printf("  *  \n");

	break;
	}
		
		case 4 : {
    		//Vers la droite.
		printf("\033[%d;%dH", vary, varx); 
		printf("*  * \n");
	
		printf("\033[%d;%dH", vary + 1 , varx); 
		printf("*****\n");
	
		printf("\033[%d;%dH", vary + 2 , varx); 
		printf("   * \n");
	break;
	}

}

	return 0;

}

