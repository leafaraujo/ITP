# Números Colegas #

"Amigo é coisa pra se guardar" -- como diz Milton Nascimento. Os números também podem ser amigos entre si!

Para saber se dois números são amigos verifica-se se a soma dos divisores próprios de um é igual ao outro e vice-versa. Por exemplo: 220 e 284 são amigos pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110, cuja soma é 284; e os divisores de 284 são 1, 2, 4, 71 e 142, cuja soma é 220. Sendo D(x) a soma dos divisores próprios, então dois números inteiros A e B são amigos se, e somente se, D(A) = B e D(B) = A.

O problema é que os números amigos são raros! Os primeiros números amigos são (220, 284), (1184, 1210), (2620, 2924).

Então você resolveu descobrir o que chamou de números colegas. Dois números inteiros A e B são colegas se |D(A) - B| <= 2 e |D(B) - A| <= 2, ou seja, a soma dos divisores próprios de um número pode ter uma diferença de até 2 para o outro número.

Por exemplo, 140 e 195 são colegas, pois a soma dos divisores próprios de 140 é 196 (diferença de 1 para 195) e a soma dos divisores próprios de 195 é 141 (diferença de 1 para 140).

O seu programa deve ler dois inteiros (suponha que sejam sempre diferentes) e escrever S caso sejam colegas e N caso contrário.​

Além disso seu programa deve utilizar duas funções: uma para somar os divisores próprios de um número e outra para retornar se dois números são colegas ou não.
