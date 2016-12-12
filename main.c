#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
   char u;
   FILE * doc;
   doc = fopen("ex2.pbm", "r");

    if (doc != NULL)
    {
        while ( u != EOF )
            {

            u = fgetc(doc);

            if (u == '1')
            {
                u = 254;
            }
            else if (u == '0')
            {
                u = 32;
            }

            printf("%c", (char)u);

            }
    }
return 0;
}
