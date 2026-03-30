#include <stdio.h>
#include <stdlib.h>

int main (){
int p[10] = {0,0,0,0,0,0,0,0,0};
int jogada = 0;
int vencedor = 0;
int jogadas = 0;
int jogador = 1;

while (vencedor == 0 && jogadas < 9){

    scanf (" %d", &jogada);

    if (jogada >=1 && jogada <=9 && p[jogada] == 0) {
        p[jogada] = jogador;
        printf ("Jogada Valida %d\n", jogada);
        jogadas++;

        if (
            (p[1] == p [2] && p [2] == p [3] && p[1] !=0) ||
            (p[4] == p [5] && p [5] == p [6] && p[4] !=0) ||
            (p[7] == p [8] && p [8] == p [9] && p[7] !=0) ||
            (p[1] == p [4] && p [4] == p [7] && p[1] !=0) ||
            (p[2] == p [5] && p [5] == p [8] && p[2] !=0) ||
            (p[3] == p [6] && p [6] == p [9] && p[3] !=0) ||
            (p[1] == p [5] && p [5] == p [9] && p[1] !=0) ||
            (p[3] == p [5] && p [5] == p [7] && p[3] !=0)

            ) {
            vencedor = jogador;
            }

        if (vencedor == 0 && jogadas < 9){
            if (jogador == 1){
            jogador = 2;
            }
            else{
            jogador = 1;
            }
            printf("Jogador %d joga agora!\n", jogador);
            }

        if (vencedor != 0){
            printf ("Jogador %d venceu!\n", vencedor);
        }

            else if (jogadas == 9) {
            printf ("Empate!\n");
            }

        printf ("Tabuleiro:\n");
        printf ("%d %d %d\n", p[1], p[2], p[3]);
        printf ("%d %d %d\n", p[4], p[5], p[6]);
        printf ("%d %d %d\n", p[7], p[8], p[9]);
    }
    else {
    printf ("Jogada Invalida %d\n", jogada);
            printf("Jogador %d joga agora!\n", jogador);
            printf ("Tabuleiro:\n");
            printf ("%d %d %d\n", p[1], p[2], p[3]);
            printf ("%d %d %d\n", p[4], p[5], p[6]);
            printf ("%d %d %d\n", p[7], p[8], p[9]);
            }
}

return 0;

}
