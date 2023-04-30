#include <stdio.h>

void diapazon(int number){
    int otvet = 1000 <= number && number <= 10000;
    printf("Diapazon - ");
    printf((otvet == 1) ? "YES\n":"NO\n");
}

void bit23(int number){
    int z;
    z = (number >> 23) & 1;
    printf("bit23 - ");
    printf((z == 1)?"1":"0");
}

int main()
{
    int num;
    scanf_s("%d", &num);

    diapazon(num);

    bit23(num);
    return 0;
}