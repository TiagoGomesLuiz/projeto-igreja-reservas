#include <stdio.h>
#include <stdlib.h>

int main(){
    
    do{
        printf("\n---OPCOES DE ACESSO---\n");
        printf("1- ADMINISTRADOR\n");
        printf("2- FAZER PEDIDO\n");
        printf("3- CAIXA\n");
        printf("4- SAIR\n");
        printf("\n\nESCOLHA UMA OPÇÃO: ");
        scanf("%i", &opcao);

        switch(opcao) {
            case 1:
                printf("\n-> ACESSO DE ADMINISTRADOR\n");
                break;
            case 2:
                printf("\n-> FAÇA SEU PEDIDO\n");
                break;
            case 3:
                printf("\n-> ACESSO CAIXA\n");
                break;
            case 4:
                printf("\n-> VOCE ESTA SAINDO\n");
                break;
            
            default()
        }

    }while(opcao != 0);

    return 0;
}