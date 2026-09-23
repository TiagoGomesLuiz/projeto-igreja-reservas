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
    
//declaro os produtos antes do loop para sempre que precisar, busco no mesmo lugar e não repito a cada loop se declarasse dentro do DO/while.
    produtos p1 = {3301, "Pastel de carne", 6.00};
    produtos p2 = {3302, "Pastel de queijo", 6.00};
    produtos p3 = {3303, "Pastel de pizza", 6.00};
    produtos p4 = {3304, "COSTELA assada (kg)", 45.00};
    produtos p5 = {3305, "PORCO assado (kg)", 35.00};
    produtos p6 = {3306, "FRANGO assado (kg)", 25.00};
    produtos p7 = {3307, "RISOTO (kg)", 20.00};
    produtos p8 = {3308, "MAIONESE (kg)", 15.00};
    produtos p9 = {3309, "ROSCA de laranja", 5.00};
    produtos p10 = {3310, "PEDAÇO de bolo", 5.00};
    produtos p11 = {3311, "Cachorro quente", 7.00};
    produtos p12 = {3312, "Coca Cola lata", 6.50};
    produtos p13 = {3313, "Fanta lata", 6.00};
    produtos p14 = {3314, "Agua garrafa 500ml", 3.00};
    produtos p15 = {3315, "CARTELA Show de prêmios", 10.00};
    produtos p16 = {3316, "RODADA EXTRA", 2.00};
        

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
