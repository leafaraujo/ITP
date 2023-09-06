#include <stdio.h>
#include <math.h>

float euclidean(float old_x, float old_y, float new_x, float new_y){
    float x, y;
    x = old_x - new_x;
    y = old_y - new_y;
    return sqrt((x*x) + (y*y));
}


int pontuation(float x, float y, float older_x, float older_y, int moves){
    int pontos = 0;
    float distance_center, distance_another;
    distance_center = euclidean(0, 0, x, y);
    distance_another = euclidean(x, y, older_x, older_y);
    if(moves == 10){
        if(distance_center >= 0.0 && distance_center <= 1.0){
        pontos += 10;
        }
        else if(distance_center >= 1.0 && distance_center <= 2.0){
        pontos += 6;
        }
        else if(distance_center >= 2.0 && distance_center <= 3.0){
        pontos += 4;
        }
        else{
        pontos += 0;
        }
    }
    else{
        if(distance_center >= 0.0 && distance_center <= 1.0){
        pontos += 10;
        }
        else if(distance_center >= 1.0 && distance_center <= 2.0){
        pontos += 6;
        }
        else if(distance_center >= 2.0 && distance_center <= 3.0){
        pontos += 4;
        }

        if(distance_another >=0.0 && distance_another <=1.0){
            pontos += 5;
        }

        else if(distance_another >1.0 && distance_another <=2.0){
            pontos += 3;
        }

        else if(distance_another >2.0 && distance_another <=3.0){
            pontos += 2;
        }
    }
    return pontos;
}

int main(){

    float coordinate_x = 0.0, coordinate_y = 0.0, new_coordinate_x, new_coordinate_y;
    int pontos = 0, moves = 10;
    while(moves != 0){
        scanf("%f %f", &new_coordinate_x, &new_coordinate_y);
        pontos += pontuation(new_coordinate_x, new_coordinate_y, coordinate_x, coordinate_y, moves);
        coordinate_x = new_coordinate_x;
        coordinate_y = new_coordinate_y;
        moves -= 1;
    }
    printf("%d", pontos);
    return 0;
}
