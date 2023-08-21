#include <stdio.h>

int main(){
    
    int number;
    scanf("%d", &number);
    int solitaire_number = number % 10;
    int other_numbers = (number - solitaire_number == 0)? 0 : number / 10;
    printf("%i ", other_numbers);
    printf("%i", solitaire_number);

    return 0;
}
