#include <stdio.h>

int main(){

    int paginas_totais, paginas_digitalizadas, pagina;
    scanf("%d %d", &paginas_totais, &paginas_digitalizadas);
    int livro[paginas_totais];
    for(int i = 0; i < paginas_totais; i++)
    {
        livro[i] = 0;
    }
    for(int i = 0; i < paginas_digitalizadas; i++)
    {
        scanf("%d", &pagina);
        livro[pagina - 1] = 1;
    }
    for(int i = 0; i < paginas_totais; i++)
    {
        if(livro[i] == 0)
        {
            printf("%d ", i + 1);
        }
    }
    return 0;   
}
