#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;
    double temperatura, conv;
    do{
            printf("\n Conversor de Temperatura\n \n");
            printf("\n1. Celsius para fahrenheit\n");
            printf("\n2.Celsius para Kelvin\n");
            printf("\n3.Fahrenheit para Celsius\n");
            printf("\n4. Kelvin para Celsius\n");
            printf("\n5. Sair\n");
            printf("\nEscolha uma opcao:  ");
            scanf("%d", &opc);

            switch(opc){
            case 1:
                printf("Digite a temperatura em Celsius: \n");
                scanf("%lf, &temperatura");
                conv = (temperatura*9/5)+32;
                printf("Resultado: %.2lf\n", conv);
                break;
            case 2:
                printf("Digite a temperatura em Celsius: \n");
                scanf("%lf", &temperatura);
                conv = temperatura+273.15;
                printf("Resultado %.2lf\n", conv);
                break;
            case 3:
                printf("Digite a temperatura em Fahrenheit: \n");
                scanf("%lf", &temperatura);
                conv = (temperatura-32)*5/9;
                printf("Resultado: %.2lf\n", conv);
                break;
            case 4:
                printf("Digite a temperatura em Kelvin: \n");
                scanf("%lf", &temperatura);
                conv = temperatura-273.15;
                printf("Resultado: %.2lf\n", conv);
                break;
            case 5:
                printf("Saindo do conversor...\n");
                break;
            default:
                printf("opcao invalida");
            }
    } while(opc!=5);
    return 0;
}
