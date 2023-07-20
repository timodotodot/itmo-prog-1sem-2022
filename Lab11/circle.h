#ifndef LAB11_AND_12_CIRCLE_H
#define LAB11_AND_12_CIRCLE_H
#include "math.h"

struct circle {
    int centerX, centerY;
    int onX, onY;
    double square;
    double lenght;
    double radius;
};

double radius(struct circle *circle){
    return sqrt((pow((circle->onX - circle->centerX),2) - pow((circle->onY - circle->centerY),2)));
}

double square(struct circle *circle){
    return 3.141592 * circle->radius * circle->radius;
}

double lenght(struct circle *circle){
    return 2 * 3.141592 * circle->radius;
}

void createStruct(struct circle *c, int centerX, int centerY, int onX, int onY){
    c->centerX = centerX;
    c->centerY = centerY;

    c->onX = onX;
    c->onY = onY;

    c->radius = radius(c);
    c->square = square(c);
    c->lenght = lenght(c);
}
#endif
