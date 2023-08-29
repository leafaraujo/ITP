#include <stdio.h>

int main() {

    int number_a, number_b, i;
    scanf("%d %d", &number_a, &number_b);
    for(i = 1; i <= 1000; i++){

        if(i % number_a == 0 && i % number_b == 0){
        printf("%d ", i);
        }
    }
    
    return 0;
}
