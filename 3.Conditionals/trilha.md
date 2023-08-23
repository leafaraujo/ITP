# A melhor trilha #

Escreva um programa em C que determine o nível da trilha (Iniciante, Intermediário ou Avançado) mais adequado para uma pessoa baseado em sua experiência e saúde física. Primeiro, o programa deve ler o número de trilhas que a pessoa já fez. A avaliação inicial é feita conforme a seguinte tabela:

| Número de Trilhas | Trilha Recomendada |
|-------------------|--------------------|
|    0 <= 5 < T     |     Iniciante      |
|    5 <= T < 20    |  Vide avaliação 1  |
|    T >= 20        |  Vide avaliação 2  |

Se for necessária uma avaliação de saúde física, e somente neste caso, seu programa deve ler do usuário um valor lógico representando a saúde da pessoa (0 para Regular, 1 para Boa). As tabelas abaixo, denominadas avaliação #' e avaliação #2, respectivamente, classificam a trilha recomendada baseada nessa avaliação.

|    Saúde Física   | Trilha Recomendada (avaliação 1) |
|-------------------|----------------------------------|
|    Regular        |            Iniciante             |
|      Boa          |          Intermediário           |


|    Saúde Física   | Trilha Recomendada (avaliação 2) |
|-------------------|----------------------------------|
|    Regular        |            Iniciante             |
|      Boa          |          Intermediário           |
