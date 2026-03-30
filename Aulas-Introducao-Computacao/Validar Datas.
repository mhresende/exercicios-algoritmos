#include <stdio.h>
#include <stdlib.h>

int main (){
int d, m, a;

printf ("Adicione o dia:\n");
scanf ("%d", &d);
printf ("Adicione o mes:\n");
scanf ("%d", &m);
printf ("Adicione o ano:\n");
scanf ("%d", &a);

if (d < 1 || d > 31 || m < 1 || m > 12 || a < 0 || a > 2026){
    printf ("INVALID DATE\n");
    }

    else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
    printf ("INVALID DATE\n");
    }

    else if (m == 2) {
        if ((a % 4 == 0 && d > 29) || (a % 4 != 0 && d > 28)) {
        printf ("INVALID DATE\n");}


        else {
            printf ("VALID DATE\n");}

        }

    else {
    printf ("VALID DATE\n");
        }

    return 0;

    }
