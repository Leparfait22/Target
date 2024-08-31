#include <stdio.h>

//Para compilar o arquivo :  gcc Estagio1.c -o estagio1
// Para executar  : ./estagio1

int main() {
   int INDICE  = 13 , SOMA = 0 , K = 0;
//    printf("Indice %d\n Soma : %d\n  K : %d" ,INDICE , SOMA, K);
   while (K < INDICE){
        K = K+1;
        SOMA = SOMA + K;
   }
    printf("Soma : %d\n", SOMA);
   
    
   

    return 0;
}
