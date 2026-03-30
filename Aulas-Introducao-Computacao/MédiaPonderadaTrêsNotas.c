#include <stdio.h>
#include <stdlib.h>

int main () {
int peso1, peso2, peso3;
float nota1, nota2, nota3, mediaponderada;

//Somatória dos pesos: 100%.
printf ("Adicione o peso da primeira nota:\n");
scanf ("%d", &peso1);
printf ("Adicione o peso da segunda nota:\n");
scanf ("%d", &peso2);
printf ("Adicione o peso da terceira nota:\n");
scanf ("%d", &peso3);
printf ("Adicione a primeira nota:\n");
scanf ("%f", &nota1);
printf ("Adicione a segunda nota:\n");
scanf ("%f", &nota2);
printf ("Adicione a terceira nota:\n");
scanf ("%f", &nota3);

mediaponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1 + peso2 + peso3);

printf ("Aqui esta sua media ponderada: %.2f\n", mediaponderada);

return 0;
}

