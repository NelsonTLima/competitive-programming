# SALTOS ORNAMENTAIS

Em uma determinada competição de saltos ornamentais, cada salto recebe um grau de dificuldade e é avaliado por sete juízes. Após cada salto, os juízes, que não se comunicam uns com os outros, mostram suas notas. Um salto é cotado entre zero e dez pontos. Depois de apresentadas as notas, a mais alta e a mais baixa são descartadas. O restante é somado e multiplicado pelo grau de dificuldade do salto, que gira entre 1,2 e 3,8, definido sempre antes do início da apresentação do atleta. O julgamento então é feito da seguinte forma: supondo que um saltador tenha sua nota de partida (seu grau de dificuldade de movimento) avaliada em 2,0 e tire notas 6,0, 5,0, 5,0, 5,0, 5,0, 5,0, 4,0 em sua execução. Disso, retira-se a nota mais baixa e a mais alta, o que gera um resultado parcial de 25,0. Então, pega-se a nota de execução e multiplica-a pela nota de partida para se chegar ao resultado final, que neste exemplo é de 50,0. Seu programa deve apresentar o resultado de uma competição de acordo com estas regras.

## Entrada

A primeira linha de entrada contém o número de competidoresN (0 ≤ N ≤ 100). A seguir são mostrados os nomes de cada um dos competidores seguidos pelo grau de dificuldade dos seus saltos GD (1.2 ≤ GD ≤ 3.8) e, a seguir, na linha seguinte, as 7 notas recebidas N1 a N7 (0 ≤ N1 a N7 ≤ 10).

## Saída

A saída deve apresentar o resultado da competição, com o nome dos competidores seguido de seu resultado, na ordem em que os dados foram lidos.

|Exemplo de Entrada             |Exemplo de Saída   |
|:---                           |:---               |
|3                              |Gabriela 50.00     |
|Gabriela                       |Marina 59.40       |
|2.0                            |Mafalda 99.30      |
|6.0 5.0 5.0 5.0 5.0 5.0 4.0    |                   |
|Marina                         |                   |
|1.5                            |                   |
|8.5 7.0 8.0 8.0 8.4 7.5 7.7    |                   |
|Mafalda                        |                   |
|3.0                            |                   |
|6.0 7.0 6.5 6.8 7.9 6.2 6.6    |                   |
