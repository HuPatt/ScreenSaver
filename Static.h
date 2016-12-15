#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void static()
{
   int i = 24;
   int j = 80;
   char tab[i][j];

   // Pointeur vers un espace qui va contenir tous les caract�res lus, en ajoutant un espace en plus.

   char *pic = malloc(i+1);

   // S�lection d'une image

   printf("L'image a ouvrir: ");
   scanf("%s", pic);

   system("clear");

   // Rep�rage et Ouverture de l'image s�lectionn�

   FILE * doc;
   doc = fopen(pic, "r");

    if (doc != NULL)
    {
        for (i = 0; i < 24; i ++)
        {
            for (j = 0; j < 80; j++)
            {

                // Lecture du fichier jusqu'� la fin

                while ( tab[i][j] != EOF )
                {

                // Acquisition des caract�res, qui vont �tre contenus dans le tableau

                tab[i][j] = fgetc(doc);

                // Conversion des valeurs par des caract�res de la norme ASCII

                if (tab[i][j] == '1')
                {
                    tab[i][j] = 254;
                    printf("%c", (char)tab[i][j]);
                }
                else if (tab[i][j] == '0')
                {
                    tab[i][j] = 32;
                    printf("%c", (char)tab[i][j]);
                }
                else if (tab[i][j] == '\n')
                {
                    tab[i][j] = '\n';
                    printf("%c", (char)tab[i][j]);
                }
                else
                    break;
                }

            // Affichage de l'image

            printf("%c", (char)tab[i][j]);

            }
        }
    }

    // Fermeture de l'image

    int fclose(FILE*);
}
