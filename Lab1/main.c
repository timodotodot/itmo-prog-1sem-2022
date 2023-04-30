#include <stdio.h>

int main(void) {
    char str[10];
    gets(str);
    printf("%s\n", str);

    int a;
    scanf("%d", &a);
    printf("%d", a);
}