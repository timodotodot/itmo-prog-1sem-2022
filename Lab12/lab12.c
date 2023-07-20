#include <stdio.h>

int main (){
    FILE *first, *second, *third;

    first = fopen ("E:\\lab11_and_12\\lab12\\read1.txt", "r");
    second = fopen ("E:\\lab11_and_12\\lab12\\read2.txt", "r");
    third = fopen ("E:\\lab11_and_12\\lab12\\write.txt", "w");
    char q[1000];

    while (!feof(first)){
        fscanf (first, "%s", q);
        fprintf (third, "%s ", q);
    }

    while (!feof(second)){
        fscanf (second, "%s", q);
        fprintf (third, "%s\n", q);
    }

    fclose (first);
    fclose (second);
    fclose (third);
    return 0;
}