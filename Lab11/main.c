#include "stdio.h"
#include "circle.h"

int main(){
    struct circle circle;
    int centerX, centerY;
    printf("Coordinates of the center >>");
    scanf_s("%d %d", &centerX, &centerY);

    int onX, onY;
    printf("Coordinates of the ON >>");
    scanf_s("%d %d", &onX, &onY);

    printf("\n");

    createStruct(&circle, centerX, centerY, onX, onY);

    printf("Lenght >> %lf\n", circle.lenght);
    printf("Square >> %lf\n", circle.square);
}