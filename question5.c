#include<stdio.h>
void main()
{
    float r;
    printf("Enter radius");
    scanf("%f",&r);
    float di,ci,area;
    di=2*r;
    ci=2*3.14*r;
    area=3.14*r*r;
    printf("%f is Diameter",di);
    printf("%f is circumference",ci);
    printf("%f is area",area);
}