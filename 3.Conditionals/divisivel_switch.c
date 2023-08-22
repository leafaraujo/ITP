#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d %d", &a, &b);
    switch (a % b){
        case 0: printf("Resultado: %d", a/b); break;
    }

    return 0;
}
