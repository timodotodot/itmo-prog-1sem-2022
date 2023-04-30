#include <stdio.h>
#include <math.h>
#define PI 3.1415926535


int main(void){
    int w;
    scanf("%d", &w);

    double a = w * PI / 180;

    double z1 = cos(a) + sin(a) + cos(3*a) + sin(3*a);
    double z2 = 2 * sqrt(2) * cos(a) * sin(PI/4 + 2*a);

    printf("z1 = %f\n", z1);
    printf("z2 = %f\n", z2);
}