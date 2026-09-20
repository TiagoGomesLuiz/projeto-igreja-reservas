# projeto-igreja-reservas
Projeto para melhoria na venda de produtos das festas da comunidade

Objetivo final é facilitar a venda/entrega dos produtos comprados na festa da comunidade

---> PROBLEMA <---

OS principal problema que identifiquei nas festas da igreja são:

* lentidão para compra de produtos (pasteis, agua, bolo, cartelas do bingo, etc).
* dificuldade na entrega dos produtos, por serem muitas pessoas comprando e poucos voluntários isso causa transtorno

---> MINHA SOLUÇÃO <---

* compra antecipada, a qual a pessoa acessará um catálogo onde terão os produtos e poderá fazer a compra.
* essa compra de vários produtos gerará um numero de pedido que irá para o banco de dados.
* no dia da festa a pessoa bastará apresentar o numero do pedido, o atendentendente com acesso de administrador acessárá o pedido e basta realizar o pagamento.
* após o pagamento, o atendente confirma o pagamento e gera uma guia com a quantidade de cada produto para disponibilização.

*MVP* _e_ *REGRA DE NEGÓCIO*

Fase 1: O Banco de Dados (A fundação)
Onde os produtos, clientes e pedidos vão ficar salvos.

Fase 2: O Back-end (O cérebro)
A API que vai receber a requisição de "novo pedido", calcular o valor total e gravar no banco.

Fase 3: O Front-end (A interface)
A tela do catálogo para o fiel comprar, e a tela de administrador para o voluntário do caixa.


-----------------PROTÓTIPO-----------------

Criarei um protótipo em C para treinar meu aprendizado em lógica de programação e posteriormente farei o sistema usando JAVA + MySQL

Para o seu protótipo em C, eu dividi o projeto em 5 Etapas Lógicas.
(darei um check em qual estarei trabalhando)

(OK)***Etapa 1: O Roteador (Menu Principal) - Controle de fluxo

-Laço de Repetição Principal: Criará um loop (do-while) para manter o programa rodando até que o usuário escolha a opção de sair.

-Menu de Opções: Exibirá um texto simples no console (ex: 1. Ver Cardápio | 2. Fazer Pedido | 3. Área do Caixa | 0. Sair).

-Captura de Entrada: Usará scanf para ler a escolha do usuário.

-Direcionamento: Implementará um bloco switch-case que reconheça o número digitado e imprima uma mensagem provisória (ex: "Entrando no cardápio...") para cada tela, além de tratar opções inválidas.

()***Etapa 2: O Molde (A Struct) - Estrutura de dados

-Struct de Produto: Definiá as variáveis internas que compõem um item da festa.

-Struct de Pedido: Definirá o formato do "ticket" que o cliente vai gerar.

()***Etapa 3: O Estoque (Vetor) - Armazenamento em memória

-Vetor do Cardápio: Declarará um array de struct Produto com um tamanho fixo.

-Vetor de Vendas: Declarará um array de struct Pedido para guardar todos os pedidos que forem gerados no dia.

-Variáveis de Controle: Criará contadores globais ou passados por referência para saber em qual posição do vetor você deve salvar o próximo registro.

()***Etapa 4: O Cadastro - Entrada de dados e contadores

-Função de Inicialização: Criará uma função específica que rode logo no início do programa.

-Carga de Dados Automática: Dentro dessa função, preencher manualmente as primeiras posições do vetor de produtos.

-Função de Exibição: Criar uma função que percorre o vetor de produtos usando um loop for e imprimirá na tela o cardápio formatado para o usuário ler.

()***Etapa 5: A Venda (Carrinho) - Lógica matemática e busca

---Lógica do Cliente (Fazer Pedido):

-Pedir para o usuário digitar o ID do produto desejado e a quantidade.

-Fará um loop de busca (for) no vetor do cardápio para encontrar aquele ID e descobrir o preço.

-Multiplicará o preço pela quantidade e somar ao total do pedido atual.

-Gerará o número do pedido, salvará no vetor de vendas e mostrará o resumo para o cliente.

---Lógica do Caixa (Administrador):

-Pedir para o voluntário digitar o número do pedido gerado pelo cliente.

-Fazer uma busca no vetor de vendas para encontrar esse pedido.

-Exibirá o valor total que deve ser cobrado.

-Perguntará se o pagamento foi confirmado e alterar a variável status daquele pedido para pago, imprimindo a confirmação de que os produtos podem ser entregues.

*******OBSERVAÇÃO*******
Lembrando que esse protótipo tem como objetivo o mero aprendizado prático, portanto, ao final após o Deploy, teremos diferenças desses passos do protótipo.