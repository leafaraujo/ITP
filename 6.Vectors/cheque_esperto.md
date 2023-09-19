# Cheque esperto R06 #

Cheque esperto é um famoso pirata que sempre pede ajuda aos alunos de ITP para encontrar tesouros. Em seu mapa há 10 ilhas numeradas de 0 a 9. Ele não sabe em qual dessas ilha está o tesouro. Quando ele visita a ilha x, os nativos afirmam que o tesouro está na ilha v[x]. Ele pediu sua ajuda para determinar a primeira ilha que, partindo da ilha 0, será visitada uma segunda vez se for seguindo a sugestão dos nativos. Ele acredita que lá deva estar o tesouro.

A imagem a seguir ilustra o exemplo para o vetor: [8, 4, 3, 0, 7, 4, 2, 1, 5, 2]. Por exemplo, os nativos da ilha 0 afirmam que o tesouro está na ilha 8 (valor que está em v[0]), os nativos da ilha 8 afirmam que o tesouro está na ilha 5 (valor que está em v[8]) e os nativos da ilha 5 afirmam que o tesouro está na ilha 4 (valor que está em v[5]). Nesse exemplo, Cheque esperto visita as ilhas na sequência: 0 → 8 → 5 → 4 → 7 → 1 → 4. Como a ilha 4 é a primeira ilha a ser visitada uma segunda, 4 deve ser a resposta.

A entrada do programa consiste na sugestão dos nativos em cada uma das 10 ilhas, desde a ilha 0 até a ilha 9. A saída do seu programa deve ser a primeira ilha que será visitada uma segunda vez. Garante-se que a entrada é tal que há solução.
