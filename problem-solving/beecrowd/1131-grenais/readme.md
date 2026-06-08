## GRENAIS

A Federação Gaucha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo inter e pelo Grêmio em GRENAL. Logo após escrever a mensagem "Novo Grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitado o número de gols marcados pelos ties em uma nova partida, caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

### Entrada

O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Grêmio respectivamente. Em seguida haverá um inteiro (1 ou 2), correspondente à repetição do programa.

### Saída

Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo for encerrado devem ser mostradas as estatísticas conforme a descrição apresentada acima. Obs: a palavrea "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.

|**Exemplo de Entrada** |**Exemplo de Saída**           |
|:---               |:---                       |
|3 2                |Novo grenal (1-sim 2-nao)  |
|1                  |Novo grenal (1-sim 2-nao)  |
|2 3                |Novo grenal (1-sim 2-nao)  |
|1                  |3 grenais                  |
|3 1                |Inter:2                    |
|2                  |Gremio:1                   |
|                   |Empates:0                  |
|                   |Inter venceu mais          |
