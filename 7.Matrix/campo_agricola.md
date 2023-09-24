# Campo agricola #

Um campo agrícola possui setores organizados de forma matricial, onde alguns são de terras férteis e outros inférteis. Irrigadores ocupam um setor por completo, nunca estão localizados na borda da matriz e irrigam cada um dos 4 setores vizinhos (norte, sul, leste, oeste). Implemente um programa que leia um inteiro M, um inteiro N (M ≤ 10, N ≤ 10), seguidos de M × N inteiros entre 0 e 2, tal que:

- 0 representa um setor infértil
- 1 representa um setor fértil
- 2 representa um setor ocupado por um irrigador
  
O programa deve escrever na tela dois inteiros: (a) quantos setores férteis estão cobertos por pelo menos um irrigador e (b) quantos não estão. O setor onde está localizado o próprio irrigador não deve ser contabilizado.
