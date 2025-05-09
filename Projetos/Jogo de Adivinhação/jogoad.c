#include <stdio.h>
#include <stdlib.h>

int main()
{
    int correto, tent, ntent = 0;
    srand(time(NULL));
    correto = rand() % 100+1;
    printf("Jogo de Adivinhacao\n");
    printf("Tente adivinhar um numero entre 1 e 100!\n");
    do{
            printf("Digite sua tentativa:\n");
    scanf("%d", &tent);
    ntent++;

    if(tent>correto){
            printf("O numero e menor! Tente de novo\n");
    }else if(tent<correto){
        printf("o numero e maior! Tente de novo\n");
    }else{
        printf("parabens, voce acertou em %d tentativas!", ntent);
    }
    }while(tent!=correto);
    return 0;
}
