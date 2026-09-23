#include <stdio.h>
#include <stdlib.h>

//preciso sempre declarar a strct no escopo global para usá-lo diversas vezes
typedef struct{
    int id;
    char nome[50];
    float preco;
}produtos;

int main(){
    int opcao;    

//indico na tela as opcoes de uso do sistema
    do{
        printf("\n---OPCOES DE ACESSO---\n");
        printf("1- PEDIDO\n");
        printf("2- ADMINISTRADOR\n");
        printf("3- CAIXA\n");
        printf("0- SAIR\n");
        printf("\n\nESCOLHA UMA OPCAO: ");
        scanf("%i", &opcao);

//resultado da escolha da opcao
        switch(opcao) {
            case 1:
                printf("\n\t->->->FAZER SEU PEDIDO<-<-<-\n");
                break;
            case 2:
                printf("\n***ACESSO ADMINISTRADOR***\n");
                break;
            case 3:
                printf("\n***ACESSO CAIXA***\n");
                break;
            case 0:
                printf("\n--->>>VOCE SAIU! ADEUS...\n");
                break;

            default:
                printf("\n-> OPCAO INVALIDA! Tente novamente.\n");
                break;
        }

    }while(opcao != 0);
    
    

    return 0;
}
