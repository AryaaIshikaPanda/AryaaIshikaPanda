#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    int b=a%2;
    switch(b)
    {
        case 0:
        printf("The number is even");
        break;
        case 1:
        printf("The number is odd");
        default:
        printf("invalid number");
    }

}