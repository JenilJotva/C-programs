#include <stdio.h>
int main()
{
    float a,b,c,max;
    printf("Enter number 1 : ");
    scanf("%f",&a);
    printf("Enter number 2 : ");
    scanf("%f",&b);
    printf("Enter number 3 : ");
    scanf("%f",&c);

    max = a;            // assume a is biggest
    if (b > max) max = b;
    if (c > max) max = c;

    printf("The biggest number is: %f", max);

    return 0;
}

