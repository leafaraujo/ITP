#include <stdio.h>

int main() {

    int counter, number, bigger, i;
    scanf("%d", &counter);
    scanf("%d ", &number);
    bigger = number;
    for(i = 0; i <= counter-1; i++){
        scanf("%d ", &number);
        if(number > bigger){
            bigger = number;
        }
    }
    printf("%d", bigger);
    return 0;
}
