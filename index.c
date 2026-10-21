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
                //é necessária as chaves {} após o rótulo "label" quando houver declaração de variável, caso contrário dará erro em C89 e C90
                {
                int continuarPedido = 1;
                int numeroTicketAtual = totalVendas +1;//continua o mesmo numero de ticket
                float totalTicket =0.0;

                do{
                printf("\n\t->->->FAZER SEU PEDIDO<-<-<-\n");
                for(i=0;i<16;i++){
                    printf("%d - %s - %.2f\n", cardapio[i].id, cardapio[i].nome, cardapio[i].preco);//apresenta todo o cardapio
                }

                int idProduto, quantidade, bingo=0;

                printf("\n\nNUMERO DO PRODUTO DESEJADO: ");
                scanf("%i", &idProduto);

                printf("\n\nQUANTIDADE: ");
                scanf("%i", &quantidade);

                //faz a busca pelo cardapio
                for(i = 0; i <16; i++){
                    if(cardapio[i].id == idProduto){
                    bingo =1;

                    //grava no vetor de vendas no indice - totalVendas
                    vendas[totalVendas].idPedido = numeroTicketAtual;
                    vendas[totalVendas].idProduto =cardapio[i].id;
                    vendas[totalVendas].quantidade =quantidade;
                    vendas[totalVendas].valorTotal = cardapio[i].preco * quantidade;

                    //soma o total desse pedido (produto X*quantidade=preço)
                    totalTicket += vendas[totalVendas].valorTotal;

                    printf("\n Item adicionado: %s x%d (R$ %.2f)\n", cardapio[i].nome, quantidade, vendas[totalVendas].valorTotal);

                    totalVendas++; // proximo item
                    break; //fim da busca quanto ao item escolhido
                    }
                }

                if(!bingo){
                    printf("\n [ERRO] Produto de numero %d nao existe!\n", idProduto);
                }

                //pergunta para continuar comprando
                printf("\n Deseja continuar comprando? (1-SIM /2-NAO): ");
                scanf("%i", &continuarPedido);

                }while(continuarPedido == 1);

                // Mostra o resumo detalhado da compra
                printf("\n****************************************************");
                printf("\n PEDIDO REALIZADO COM SUCESSO!");
                printf("\n TICKET N: %d \n", numeroTicketAtual);
                printf("----------------------------------------------------\n");
                printf(" ITENS DO PEDIDO:\n");

                //Passa pelo vetor de vendas oara encontrar todos os itens do ticket
                for(int j = 0; j < totalVendas; j++) {
                    if(vendas[j].idPedido == numeroTicketAtual) {

                        // apos isso, busca o nome correspondente no cardapio com o idProduto
                        for(int k = 0; k < 16; k++) {
                            if(cardapio[k].id == vendas[j].idProduto) {
                                printf(" - %s x%d = R$ %.2f\n", cardapio[k].nome, vendas[j].quantidade, vendas[j].valorTotal);
                                break;
                                printf("\n***APRESENTE SEU NUMERO DE TICKET AO CAIXA***\n");
                            }
                        }
                    }
                }

                printf("----------------------------------------------------\n");
                printf(" TOTAL A PAGAR: R$ %.2f\n", totalTicket);
                printf("****************************************************\n");

            break;
            }

            case 2:
                printf("\n***ACESSO ADMINISTRADOR***\n");
                break;
            case 3:{ //chaves abertas igual ao case 1
                int ticketBuscado, achouTicket=0;
                float totalCaixa =0.0;

                printf("\n***ACESSO CAIXA - CONSULTA TICKET***\n");

                printf("\nDigite o numero do TICKET: ");
                scanf("%i",ticketBuscado);

                printf("----------------------------------------------------\n");
                printf("TICKET NUMERO: %d\n", ticketBuscado);
                printf("----------------------------------------------------\n");
                printf("*ITENS COMPRADOS:* %d\n");

                //percorre pelo vetor de vendas para filtrar pelo numero digitado
                for(int j=0; j<totalVendas; j++){
                    if(vendas[j].idPedido == ticketBuscado){
                        achouTicket = 1; //indica que achou o ticket

                        // busca o nome do produto no cardápio usando o idProduto da venda
                        for(int k = 0; k < 16; k++) {
                            if(cardapio[k].id == vendas[j].idProduto) {
                                printf(" - %s x%d = R$ %.2f\n", cardapio[k].nome, vendas[j].quantidade, vendas[j].valorTotal);

                                // soma ao valor total a pagar do ticket
                                totalCaixa += vendas[j].valorTotal;
                                break;
                            }
                        }
                    }
                }
            }

                break;
                }
            case 0:
                printf("\n--->>>NOS VEMOS NO DIA DA FESTA, FIQUE COM DEUS...\n");
                break;

            default:
                printf("\n-> OPCAO INVALIDA! Tente novamente.\n");
                break;
        }

    }while(opcao != 0);



    return 0;
}
