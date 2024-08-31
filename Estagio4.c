#include <stdio.h>


//Para compilar o arquivo :  gcc Estagio4.c -o estagio4
// Para executar  : ./estagio4

int main(){

    double SP = 67836.43;
    double RJ = 36678.66;
    double MG = 29229.88;
    double ES = 27165.48;
    double OUTROS  = 19849.53;

    double total = SP+RJ+MG+ES+OUTROS;

    printf("\n");
    printf("\tPercentagem de Sao Paulo : %.2f %%\n", (SP/total)*100);
    printf("\tPercentagem de Rio de Janeiro : %.2f %%\n", (RJ/total)*100);
    printf("\tPercentagem de Minas Gerais : %.2f %%\n", (MG/total)*100);
    printf("\tPercentagem de Espirito Santo : %.2f %%\n", (ES/total)*100);
    printf("\tPercentagem de Outros estados : %.2f %%\n", (OUTROS/total)*100);
    printf("\n");

    return 0;
}