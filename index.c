#include <stdio.h>
#include <stdlib.h>

//preciso sempre declarar a strct no escopo global para usá-lo diversas vezes
typedef struct{
    int id;
    char nome[50];
    float preco;
}produtos;

typedef struct{
    int idPedido, idProduto, quantidade;
    float valorTotal;
}pedido;

int main(){
    int opcao, i=0, totalVendas = 0;
    pedido vendas[100];


//declaro os produtos antes do loop para sempre que precisar, busco no mesmo lugar e não repito a cada loop se declarasse dentro do DO/while.
//para rodar, percebi a economia de código se declarasse como vetor, assim não declaro várias variáveis
    produtos cardapio[16] = {
    {1, "Pastel de carne", 6.00},
    {2, "Pastel de queijo", 6.00},
    {3, "Pastel de pizza", 6.00},
    {4, "COSTELA assada (kg)", 45.00},
    {5, "PORCO assado (kg)", 35.00},
    {6, "FRANGO assado (kg)", 25.00},
    {7, "RISOTO (kg)", 20.00},
    {8, "MAIONESE (kg)", 15.00},
    {9, "ROSCA de laranja", 5.00},
    {10, "PEDACO de bolo", 5.00},
    {11, "Cachorro quente", 7.00},
    {12, "Coca Cola lata", 6.50},
    {13, "Fanta lata", 6.00},
    {14, "Agua garrafa 500ml", 3.00},
    {15, "CARTELA Show de premios", 10.00},
    {16, "RODADA EXTRA", 2.00}
    };


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
                for(i=0;i<16;i++){
                printf("%d - %s - %.2f\n", cardapio[i].id, cardapio[i].nome, cardapio[i].preco);
                }

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
