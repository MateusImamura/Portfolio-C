#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2;
    char operador;
    printf("Digite uma operacao: \n");
    scanf("%lf %c %lf", &n1, &operador, &n2);
    switch(operador){
                     case '+':
                          printf("Resultado: %2lf\n", n1 + n2);
                          break;
                     case '-':
                     printf("Resultado: %.2lf\n", n1 - n2);
                     break;
                     case '*':
                          printf("Resultado: %.2lf\n", n1 * n2);
                          break;
                     case '/':
                          if(n2 != 0){
                                  printf("Resultado: %.2lf\n", n1/n2);
                                  }else{
                                        printf("Erro: divisao por 0");
                                        }
                                        break;
                     default:
                             printf("operador invalido");
                             }
                             return 0;
}
