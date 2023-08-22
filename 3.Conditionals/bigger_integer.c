#include <stdio.h>

int main(){

    int a, b, c, d, maior;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    maior = a;
    if(b > a){ 
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    if(d > maior){
        maior = d;
    }
    
    printf("Maior: %d", maior);

    return 0;
}
