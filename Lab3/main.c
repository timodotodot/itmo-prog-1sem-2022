#include <stdio.h>

void Zadanie2(int number) {
    printf("Zadanie 2 - %X (HEX)\n", number);
}

void Zadanie3(int number){
    printf("Zadanie 3 - %o (OCT) | %o (OCT >> 3)\n",number, number >> 3);
}

void Zadanie4(int number){
    int a = ~number;
    printf("Zadanie 4 - %o (OCT) | %o (NOT OCT)\n",number,a);
}

void Zadanie5(int numberfirst, int numbersecond){
    int or = numberfirst | numbersecond;
    printf("Zadanie 5 - %o (OCT)",or);
}
int main(){
    int num;

    scanf_s("%d", &num);
    Zadanie2(num);
    Zadanie3(num);
    Zadanie4(num);

    int num5;
    scanf_s("%o", &num5);

    Zadanie5(num5,num);
    return 0;
}