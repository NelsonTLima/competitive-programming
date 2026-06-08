# Onde está o Mármore?

Raju e Meena adoram jogar um jogo diferente com pequenas peças de mármore, chamados Marbles. Eles têm um monte destas peças com números escritos neles. No início, Raju colocaria estes pequenos mármores um após outro em ordem ascendente de números escritos neles. Então Meena gostaria de pedir a Raju para encontrar o primeiro mármore com um certo número. Ele deveria contar 1...2...3. Raju ganha um ponto por cada resposta correta e Meena ganha um ponto se Raju falha. Depois de um número fixo de tentativas, o jogo termina e o jogador com o máximo de pontos vence. Hoje é sua chance de jogar com Raju. Sendo um/a cara esperto/a, você tem em seu favor o computador. Mas não subestime Meena, ela escreveu um programa para monitorar quanto tempo você levará para dar todas as respostas. Portanto, agora escreva o programa, que ajudará você em seu desafio com Raju.

### Entrada

A entrada contém vários casos de teste, mas o total de casos é menor do que 65. Cada caso de teste inicia com dois inteiros: N que é o número de mármores e Q que é o número de consultas que Meena deseja fazer. As próximas N linhas conterão os números escritos em cada um dos N mármores. Os números destes mármores não tem qualquer ordem em particular. As seguintes Q linhas irão conter Q consultas. Tenha certeza, nenhum dos números da entrada é maior do que 10000 e nenhum deles é negativo.
A entrada é terminada por um caso de teste onde N = 0 e Q = 0.

### Saída

Para cada caso de teste de saída deve haver um número serial do caso de teste. Para cada consulta, escreva uma linha de saída. O formato desta linha dependerá se o número consultado estiver ou não escrito em um dos mármores. Os dois diferentes formatos são descritos abaixo:
'x found at y', se o primeiro marble x foi encontrado na posição y. Posições são numeradas de 1, 2,...  a N.
'x not found', se o marble com o número x não estiver presente.

### Nota pessoal:

Os inputs colocados por Raju não tem nenhuma ordem especial, porém a posição que deve ser mostrada no output deve considerar uma lista ordenada (sort). Isso não ficou claro no enunciado o que me fez gastar muitas submissões para descobrir o problema.

|Exemplo de Entrada |Exemplo de Saída   |
|:---               |:---               |
|4 1                |CASE# 1:           |
|2                  |5 found at 4       |
|3                  |CASE# 2:           |
|5                  |                   |
|1                  |                   |
|5                  |                   |
|5 2                |                   |
|1                  |                   |
|3                  |                   |
|3                  |                   |
|1                  |                   |
|2                  |                   |
|3                  |                   |
|0 0                |                   |
