#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    
    if(a < b){
    for(; a <= b; a++){
    printf("%d ", a);
            }
        }

    else if(a > b){
        for(; a >= b; a--){
        printf("%d ", a);
            }    
        }
        
    else{
        printf("%d", a);
    }
    return 0;
}
