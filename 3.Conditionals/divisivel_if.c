#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d %d", &a, &b);
    if( a % b == 0 ){

        c = a / b;
        printf("Resultado: %d", c);
    }

    return 0;
}
