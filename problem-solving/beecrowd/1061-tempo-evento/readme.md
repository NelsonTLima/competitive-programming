## TEMPO DE UM EVENTO

Pedrinho está organizando um evento em sua universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

### Entrada

Como entrada, na primeira linha vai haver a descrição "Dia", seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar no formato hh:mm:ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

### Saída

Na saída, deve ser apresentada a duração, no seguinte formato:

*W dia(s)
X hora(s)
y minuto(s)
Z segundo(s)*

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

|**Exemplos de Entrada**|**Exemplos de Saída**  |
|:---               |:---               |
|Dia 5              |3 dia(s)           |
|08 : 12 : 23       |22 hora(s)         |
|Dia 9              |1 minuto(s)        |
|06 : 13 : 23       |0 segundo(s)       |
