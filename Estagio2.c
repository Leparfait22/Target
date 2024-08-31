#include <stdio.h>

//Para compilar o arquivo :  gcc Estagio2.c -o estagio2
// Para executar  : ./estagio2

int main(){

    unsigned long long passo1  = 0,passo2 = 1;
    int numero = 0;
    printf("Inserir numero  : ");
    scanf("%d" , &numero);
    unsigned long long fibonacci = 0;
    
    for(int i = 0; i <= numero+1 ; i++){

        if(i == 0){
            fibonacci = 0;
        }else if(i == 1){
            fibonacci = 1;
        }else{

            fibonacci = passo1 + passo2;
            passo1 = passo2;
            passo2 = fibonacci;
        }
        printf(" %llu " , fibonacci);
        if(fibonacci == numero){
            printf("\nO numero %d pertence a sequencia de fibonacci\n" , numero);
            return 0;
        }
    }
    printf("\nO numero %d nao pertence a sequencia de fibonacci\n" , numero);


    return 0;
}