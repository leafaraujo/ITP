# Jogo de Dardos #

Cansados das mesmas regras do jogo de dardos, um grupo de amigos resolveu inovar: ganha pontos não só quem acerta mais perto do alvo, mas ganha também uma pontuação bônus (metade da principal) quem acerta próximo do último lançamento. Afinal, quem lança errado sempre no mesmo lugar também tem boa pontaria, ela só não está calibrada.

O seu programa deve ler as coordenadas (x, y), dois números reais, de 10 lançamentos e escrever na tela a pontuação total.

O centro do alvo sempre está em (0, 0), a distância é dada pela distância euclidiana (https://pt.wikipedia.org/wiki/Dist%C3%A2ncia_euclidiana) e, claro, não há pontuação bônus para o primeiro lançamento, pois não há lançamento anterior.

Sua solução deve incluir uma função para calcular a distância euclidiana entre dois pontos e outra função para calcular a pontuação de um lançamento.

| Distância         |Pontuação principal | Pontuação Bônus |
|-------------------|--------------------|------------------
|    [0,1]          |     + 10pts        |+ 5pts           |
|    ]1,2]          |  + 6pts            |+ 3pts           |
|    ]2,3]          |  + 4pts            |+ 2pts           |
|    Acima de 3     |  0 pts             | 0 pts           |
