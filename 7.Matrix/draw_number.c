#include <stdio.h>
#include <stdlib.h>

void print_number(char numero[][7], int pixels){
    int i, j;
    for(i = 0; i < pixels; i++){
        for(j = 0; j< pixels; j++){
            printf("%c", numero[i][j]);
        }
    printf("\n");
    }
}

void make_number(char number[][7]){
    int i, j, y, x;
    scanf("%d %d", &y, &x);
    int old_y = y, old_x = x;
    
    while(x >= 0 && x <= 6 || y >= 0 && y <= 6){
        int last_y = old_y, last_x = old_x;
        if(y > last_y){
            if(x > last_x){
                for(i = last_y; i <= y; i++){
                    for(j = last_x; j <= x; j++){
                        number[i][j] = '#';
                    }
                }
            }
            else if(x < last_x){
                for(i = last_y; i <= y; i++){
                    for(j = last_x; j >= x; j--){
                        number[i][j] = '#';
                    }
                }
            }
            else if(x == last_x){
                for(i = last_y; i <= y; i++){
                    number[i][x] = '#';
                }
            }
        }
        else if(y < last_y){
            if(x > last_x){
                for(i = last_y; i >= y; i--){
                    for(j = last_x; j <= x; j++){
                        number[i][j] = '#';
                    }
                }
            }
            else if(x < last_x){
                for(i = last_y; i >= y; i--){
                    for(j = last_x; j >= x; j--){
                        number[i][j] = '#';
                    }
                }
            }
             else if(x == last_x){
                for(i = last_y; i <= y; i++){
                    number[i][x] = '#';
                }
            }
        }
        else if(y == last_y){
               if(x > last_x){
                for(j = last_x; j <= x; j++){
                    number[y][j] = '#';
                }
            }
            else if(x < last_x){
                for(j = last_x; j >= x; j--){
                    number[y][j] = '#';
                }
            }
             else if(x == last_x){
                number[y][x] = '#';
            }
        }
    old_y = y, old_x = x;
    scanf("%d %d", &y, &x);
    }
    print_number(number,7);
}

int main(){

    char num[7][7];

    for(int i=0; i < 7; i++){
        for(int j=0; j < 7; j++){
            num[i][j] = '_';
        }
    }
    make_number(num);

    return 0;
}
