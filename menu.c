#include <stdio.h>
#include <stdlib.h>



int menu()
{

 //Declaration des variables.

	int fin = 0;
	FILE* fichier = NULL;
	char touche;
	

 //Menu principale du jeu.

    printf("====================Interactif====================\n");
    printf("Etes vous pret ? (y/m)\n");

    touche = getch();
    if(touche == 'm')

   {
        printf("Retour menu \n\n");
     }

    else if(touche == 'y')

   {
	// Ouverture du programme principal.
	Programme();

}
return 0;
}
