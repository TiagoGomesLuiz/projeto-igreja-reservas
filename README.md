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


