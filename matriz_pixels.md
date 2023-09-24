# Desenhando em uma matriz de pixels #

Em processamento de imagens, a estrutura de dados de uma imagem é na forma de uma matriz de pixels, onde cada célula da matriz possui o valor da cor do pixel naquela posição da imagem. Neste exercício trabalharemos com uma imagem de 7 por 7 pixels para representar os dígitos (0 a 9) em preto e branco. Assim, os valores dos pixels assumem apenas dois valores, 1 para preto e 0 para branco. As coordenadas (linha, coluna) da imagem correspondem aos índices da matriz, isto é, a célula (0,0) da matriz reflete a coordenada superior esquerda, e (6,6) a coordenada inferior direita da imagem. 

Crie uma programa que trace linhas pretas horizontais ou verticais na imagem a partir de comandos de movimentação de um cursor pincel imaginário. Por exemplo, para 'desenharmos' o dígito 2 a partir da coordenada (0,0) devemos informar:

0 0
0 6
3 6
3 0
6 0
6 6

O programa deve parar a movimentação do pincel imaginário quando o usuário informar a coordenada: -1 -1. Assim, para desenhar o dígito 1 no centro da imagem, o usuário informa:

0 3
6 3
-1 -1

Após a movimentação do cursor o programa deve imprimir a imagem colocando um tracejado ('_') quando o pixel for branco e um jogo da velha ('#') quando o pixel for preto. Use pelo menos uma função para imprimir a imagem passando a matriz como argumento.
