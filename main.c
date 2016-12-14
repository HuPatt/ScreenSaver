#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int menu(void)

{
	system("clear");
        printf("=========================================MENU=====================================\n\n");
        printf("Testez le premier ecran!\tTestez le deuxieme ecran!\tTestez le troisieme ecran\n");
        printf("Appuyez sur la touche 's'\tAppuyez sur la touche 'd'\tAppuyez sur la touche 'i'\n\n");
        printf("Pour quitter le programme appuyez sur la touche 'p'\n\n ");
}

int affichageMenu(void)
{
        char touche;
	int compteur = 0;

	menu();

	/*affichage des différents écrans*/

    	while(compteur > 5){
		compteur++;
        	scanf("%c", &touche);

		if(touche == 's'){

            		system("clear");
            		printf("Voici l'ecran de veille statique\n");
	    		printf("Pour revenir sur le menu appuyez sur la touche 'm'\n");
            		continue;

        	}

        	else if(touche == 'd'){

            		system("clear");
            		printf("Voici l'ecran de veille dynamique\n");
	    		printf("Pour revenir sur le menu appuyez sur la touche 'm'\n");
            		continue;

        	}

       		else if(touche == 'i'){

           		system("clear");
            		printf("Voici l'ecran de veille interactif\n");
	    		printf("Pour revenir sur le menu appuyez sur la touche'm'\n");
            		continue;

       		}

		else if(touche == 'm'){

			system("clear");
			menu();

		}



		else if(touche == 'p'){

            		system("clear");
            		printf("A bientot\n");
            		break;
        	}
	}
}

void affichageStats(void){
	char caractere;
	FILE* fichier = NULL;
	fichier = fopen("stats.txt", "r+");

	if(fichier != NULL){
		while(caractere !=EOF){
			caractere = fgetc(fichier);
			printf("%c", caractere);
		}
		printf("\n");
	}
	
	else{
		printf("impossible d'ouvrir le fichier");
	}
}


void  aleatoire(int *pointeurNbr){

	srand(time(NULL));
	*pointeurNbr = rand()%3+1;

}



int lancementStatique(void){
	printf("test\n");

}



int main(int argc, char *argv[])
{

	/*Parametre stats*/
	if(argc < 1){

		printf("Erreur, nombre d'arguments invalide");}


  	else if(argc == 2){

   		if(strcmp(argv[1], "-stats") == 0){
			printf("test\n");
			affichageStats();
			return 0; 
		}

		if(strcmp(argv[1], "-test") == 0){
			affichageMenu();
			printf("lancement de l'ecran de veille statique.\n");
		}
	}

//      	fclose(fichier);

	sleep(5); // temps d'attente avant la mise en veille
	
//Choix aleatoire des écrans

	int nombre = 0;
	aleatoire(&nombre);
	
	if(nombre == 1){
		lancementStatique();
		printf("ecran statique\n");
	}
	
	else if(nombre == 2){
		printf("Ecran dynamique\n");
	}
	
	else if(nombre == 3){
		printf("Ecran dynamique\n");
	}

 
       return 0;

}

