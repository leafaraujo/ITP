#include <stdio.h>

int main(){

    int hours, minutes, seconds;
    scanf("%i", &hours);
    scanf("%i", &minutes);
    scanf("%i", &seconds);
    int resultado = (hours * 3600) + (minutes * 60) + seconds;
    printf("%d", resultado);

    return 0;
}
