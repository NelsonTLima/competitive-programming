# ESTIAGEM

Devido às constantes estiagens que aconteceram nos últimos tempos em algumas regiões do Brasil, o governo federal criou um órgão para a avaliação do consumo destas regiões com finalidade de verificar o comportamento da população na época de racionamento. Este órgão responsável irá pegar algumas cidades (por amostragem) e verificará como está sendo o consumo de cada uma das pessoas da cidade e o consumo médio de cada cidade por habitante.

### Entrada

A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 10^6), indicando a quantidade de imóveis. As N linhas contém um par de valores X (1 ≤ X ≤ 10) e Y (1 ≤ Y ≤ 200), indicando a quantidade de moradores de cada imóvel e o respectivo consumo total de cada imóvel (em m3). Com certeza, nenhuma residência consome mais do que 200 m3 por mês. O final da entrada é representado pelo número zero.

### Saída

Para cada entrada, deve-se apresentar a mensagem “Cidade# n:”, onde n é o número da cidade seguindo a sequência (1, 2, 3, ...) e em seguida deve-se listar, por ordem ascendente de consumo, a quantidade de pessoas seguido de um hífen e o consumo destas pessoas, arredondando o valor para baixo. Na terceira linha da saída deve-se mostrar o consumo médio por pessoa da cidade, com 2 casas decimais sem arredondamento, considerando o consumo real total. Imprimir uma linha em branco entre dois casos de teste consecutivos. No fim da saída não deve haver uma linha em branco.

## Nota pessoal:

O enunciado desta questão não está muito claro, portanto, vou explicar: trata-se de um loop no qual cada cíclo representa uma cidade diferente. O primeiro input N de cada cíclo diz respeito ao número de repetições em um outro loop que analisará, uma por uma, as N residencias contidas nessa cidade. Dentro deste loop menor, deve-se informar o número de pessoas seguido do consumo total de agua nesta casa.Ao terminar de informar os casos em cada residência deve-se informar a quantidade de residências na proxima cidade, caso digite 0, as saidas são apresentadas e o programa é encerrado. Na saída será mostrado na primeira linha o número da cidade, na segunda linha, em ordem de consumo, será mostrado as médias calculadas precedidas pela quantidade de pessoas que estão sob essa média (separados por um traço).

### importante:

**- O enunciado original não informa que se duas residências diferentes obtém a mesma media de consumo, deve-se juntar as duas. Por exemplo, as entradas 3-31 e 2-20 gerariam, respectivamente 3-10 e 2-10 nas saidas. Não foi informado que elas devem ser fundidos em uma unica saída: 5-10, isso será percebido na cidade 2 conforme o exemplo a seguir:**

|Exemplo de Entrada |Exemplo de Saída           |
|:---               |:---                       |
|3                  |Cidade# 1:                 |
|3 22               |2-5 3-7 3-13               |
|2 11               |Consumo medio: 9.00 m3.    |
|3 39               |                           |
|5                  |Cidade# 2:                 |
|1 25               |5-10 6-11 2-20 1-25        |
|2 20               |Consumo medio: 13.28 m3.   |
|3 31               |                           |
|2 40               |Cidade# 3:                 |
|6 70               |3-0 1-1                    |
|2                  |Consumo medio: 0.75 m3     |
|1 1                |                           |
|3 2                |                           |
|0                  |                           |
