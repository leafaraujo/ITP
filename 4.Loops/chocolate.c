#include <stdio.h>

int main(){

    int lado_1, lado_2, dias;
    scanf("%d %d", &lado_1, &lado_2);
    dias = 0;
    if(lado_1 > lado_2){
        while(lado_1 != lado_2){
        lado_1 /= 2;
        dias += 1;
        }
    }
    else if(lado_2 > lado_1){
        while(lado_2 != lado_1){
            lado_2 /= 2;
            dias += 1;
        }

    }
    printf("%d", dias);

    return 0;
}
