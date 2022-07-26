## Descrição
Repositório utilizado para realizar atividades requisitadas em processos seletivos.

### Job Rotation
#### Questão 1
Observe o trecho de código abaixo:
```sh
int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça
{
    K = K + 1;
    SOMA = SOMA + K;
}

imprimir(SOMA);
```
Ao final do processamento, qual será o valor da variável SOMA? <br>
link do código: <a href="https://github.com/Sr-Souza-dev/Problems/blob/main/k-som.cpp">k-som<a>

#### Questão 2
Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência. <br>
*IMPORTANTE*:
Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código; <br>
link do código: <a href="https://github.com/Sr-Souza-dev/Problems/blob/main/fibonacci.cpp">fibonacci<a>

#### Questão 3
Dado um <a href="https://github.com/Sr-Souza-dev/Problems/blob/main/dados/dados.json">vetor<a> que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
* O menor valor de faturamento ocorrido em um dia do mês;
* O maior valor de faturamento ocorrido em um dia do mês;
* Número de dias no mês em que o valor de faturamento diário foi superior à média mensal. <br>
*IMPORTANTE*: 
1. Usar o json ou xml disponível como fonte dos dados do faturamento mensal;
1. Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média; <br>
link do código: <a href="https://github.com/Sr-Souza-dev/Problems/blob/main/faturamento.py">faturamento<a>

#### Questão 4
Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

    SP – R$67.836,43
    RJ – R$36.678,66
    MG – R$29.229,88
    ES – R$27.165,48
    Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora. <br>
link do código: <a href="https://github.com/Sr-Souza-dev/Problems/blob/main/percent.py">percent<a>

#### Questão 5
Escreva um programa que inverta os caracteres de um string.<br>
IMPORTANTE:
1. Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
1. Evite usar funções prontas, como, por exemplo, reverse;
link do código: <a href="https://github.com/Sr-Souza-dev/Problems/blob/main/reverse.cpp">reverse<a>