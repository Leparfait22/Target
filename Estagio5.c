#include <stdio.h>
#include <string.h>

//Para compilar o arquivo :  gcc Estagio5.c -o estagio5
// Para executar  : ./estagio5

int main(){
    char entrada[50];
    printf("Digite uma string: ");
    scanf("%s",entrada);

    int tamanho = strlen(entrada);
    char inverse[tamanho];

    for (int i = 0; i < tamanho; i++){
        inverse[i] = entrada[tamanho-i-1];
    }
    
    printf("String invertida: %s\n", inverse);
    return 0;
}