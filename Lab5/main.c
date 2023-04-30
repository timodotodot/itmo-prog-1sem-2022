#include "stdio.h"

int main(){

    short array[9] = {88, 112, 6467, 325, 878, 3, 77, 8, 99};
    for (char i = 0; i < 9; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
    printf("\n");

    char matrica1[2][2] = {{2, 5}, {2, 2}};
    char matrica2[2][2] = {{1, 2}, {0, 1}};

    char rez[2][2];
    rez[0][0] = matrica1[0][0] * matrica2[0][0] + matrica1[0][1] * matrica2[1][0];
    rez[0][1] = matrica1[0][0] * matrica2[0][1] + matrica1[0][1] * matrica2[1][1];
    rez[1][0] = matrica1[1][0] * matrica2[0][0] + matrica1[1][1] * matrica2[1][0];
    rez[1][1] = matrica1[1][0] * matrica2[0][1] + matrica1[1][1] * matrica2[1][1];

    for (char i = 0; i < 2; i++){
        for (char j = 0; j < 2; j++){
            printf("%d ", rez[i][j]);
        }
        printf("\n");
    }
}