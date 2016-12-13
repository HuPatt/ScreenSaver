#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
   int i = 5000;
   char tab[i];
   char *pic = malloc(i+1);

   printf("L'image à ouvrir: ");
   scanf("%s", pic);

   FILE * doc;
   doc = fopen(pic, "r");

    if (doc != NULL)
    {
        for (i = 0; i < 1921; i ++)
        {
            while ( tab[i] != EOF )
            {

            tab[i] = fgetc(doc);

            if (tab[i] == '1')
            {
                tab[i] = 254;
                printf("%c", (char)tab[i]);
            }
            else if (tab[i] == '0')
            {
                tab[i] = 32;
                printf("%c", (char)tab[i]);
            }
            else if (tab[i] == '\n')
            {
                tab[i] = '\n';
                printf("%c", (char)tab[i]);
            }
            else
                break;

            printf("%c", (char)tab[i]);

            }
        }
    }
    int fclose(FILE*);

return 0;
}
