#include <stdio.h>

int main() {

    int number_x, number_counter, i;
    scanf("%d %d", &number_x, &number_counter);
    for(i=1;i <= number_counter;i++)
    {
        if(i == number_counter){
            printf("%d\n", number_x);
        }
        else{
             printf("%d, ", number_x);
        }
    }
    return 0;
}
