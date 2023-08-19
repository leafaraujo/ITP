#include <stdio.h>

int main(){
    
    int dias, meses, anos, dias_restantes, meses_restantes;
    scanf("%d", &dias);
    anos = (dias / 360 > 0)? dias / 360 : 0;
    meses = (dias / 29 > 0 )? dias / 30 - (anos * 12) : 0;
    dias_restantes = (dias > 29)? dias % (dias/30) - (anos * 5) : dias; 
    meses_restantes = (dias_restantes < 0)?  dias_restantes / 30 * (-1): meses;
    dias_restantes = (dias_restantes < 0)? (dias_restantes ) + ((meses_restantes*30) +30) : dias_restantes;
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses_restantes);
    printf("%d dia(s)\n", dias_restantes);
    
    return 0;
}
