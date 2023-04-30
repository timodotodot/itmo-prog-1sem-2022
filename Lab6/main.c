#include <stdio.h>
#include <stdlib.h>

int main() {
    float massiv[4] = {-8.8, 11.2, 64.67, 55.32};
    float *MAS = &massiv[0];
    for (int i = 0; i < 4; i++) {
        printf("%.2f\n", *(massiv + i));
    }

    printf("\n");

    float *massiv2 = (float *) malloc(4 * sizeof(float));
    massiv2[0] = -8.8;
    massiv2[1] = 11.2;
    massiv2[2] = 64.67;
    massiv2[3] = 55.32;
    for (int i = 0; i < 4; i++) {
        printf("%.2f\n", *(massiv2 + i));
    }
}