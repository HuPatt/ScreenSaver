#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*Fonctions pour l'affichage des statistiques*/
int menu(void)

{
	system("clear");
        printf("=========================================MENU=====================================\n\n");
        printf("Affichez l'ecran des statistiques\tCHANGEZ la valeur de N!\tAffichez .......\n");
        printf("Appuyez sur la touche 's'\tAppuyez sur la touche 'd'\tAppuyez sur la touche 'i'\n\n");
        printf("Pour quitter le programme appuyez sur la touche 'p'\n\n ");
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

int affichageMenu(void)
{
        char touche;
	int fin = 0;
	menu();

	/*affichage des différents écrans*/

    	while(fin !=1){
        	scanf("%c", &touche);

		if(touche == 's'){

            		system("clear");
			printf("test debug\n");
            		affichageStats();
	    		printf("Pour revenir sur le menu appuyez sur la touche 'm'\n");
            		continue;

        	}

        	else if(touche == 'd'){
			int n = 0; 

            		system("clear");
			printf("changez la valeur de n");
			scanf("%d", &n);

			putenv(EXIASAVER2_SLEEP=n);
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
			fin = 1;
            		break;
        	}
	}
}

/*Fonction permettant de choisir aléatoirement un nombre entre 1 et 3 pour ouvrir aléatoirement 1 des 3 types d'écrans de veille*/
void  aleatoire(int *pointeurNbr){

	srand(time(NULL));
	*pointeurNbr = rand()%3+1;

}

// Fonction qui permet d'enregistrer les données des écrans de veille lancés dans le fichier stats.txt

int ecrireStatique (void){
       
        FILE *fichier = fopen ("stats.txt", "a+");

        if (fichier != NULL){

		time_t t = time (NULL);
          	struct tm tm_t = *localtime(&t);

         	 char s_t[sizeof "JJ/MM/AAAA HH:MM:SS"];
	
	  	// Cette fonction permet de redéfinir la structure de données utilisée par la fonction time
          	strftime(s_t, sizeof s_t, "%d/%m/%y %H:%M:%S", &tm_t);

         	fprintf (fichier, "%s Statique;\tNom du fichier\n", s_t);
          	close (fichier);
       }
}

int ecrireDyn (void){
 
        FILE *fichier = fopen ("stats.txt", "a+");

        if (fichier != NULL){

          time_t t = time (NULL);
          struct tm tm_t = *localtime(&t);

          char s_t[sizeof "JJ/MM/AAAA HH:MM:SS"];
	
	  // Cette fonction permet de redéfinir la structure de données utilisée par la fonction time
          strftime(s_t, sizeof s_t, "%d/%m/%y %H:%M:%S", &tm_t);

          fprintf (fichier, "%s Dynamique;\tTaille de l'ecran\n", s_t);
          close (fichier);
       }
}

int ecrireInte (void){
       
        FILE *fichier = fopen ("stats.txt", "a+");

        if (fichier != NULL){

          time_t t = time (NULL);
          struct tm tm_t = *localtime(&t);

          char s_t[sizeof "JJ/MM/AAAA HH:MM:SS"];
	
	  // Cette fonction permet de redéfinir la structure de données utilisée par la fonction time
          strftime(s_t, sizeof s_t, "%d/%m/%y %H:%M:%S", &tm_t);

          fprintf (fichier, "%s Interactif;\tPosition de l'avion\n", s_t);
          close (fichier);
       }
}



int lancementStatique(void){
	int alea;
	printf("test\n");
	srand(time(NULL));
	alea = rand()%5+1
}



int main(int argc, char *argv[])
{

	/*Parametre stats*/
	if(argc < 1){

		printf("Erreur, nombre d'arguments invalide");}


  	else if(argc == 2){

   		if(strcmp(argv[1], "-stats") == 0){
			printf("test\n");
			affichageMenu(); 
		}

		if(strcmp(argv[1], "-test") == 0){
			printf("lancement de l'ecran de veille statique.\n");
		}
	}
	
	else{
		sleep(5); // temps d'attente avant la mise en veille
	
		//Choix aleatoire des écrans

		int nombre = 0;
		aleatoire(&nombre);
	
		if(nombre == 1){
			lancementStatique();
			ecrireStatique();
			printf("ecran statique\n");
		}
	
		else if(nombre == 2){
			ecrireDyn();
			printf("Ecran dynamique\n");
		}
	
		else if(nombre == 3){
			ecrireInte();
			printf("Ecran Interactif\n");
		}

 	}

       return 0;

}

