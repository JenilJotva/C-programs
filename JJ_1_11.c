#include <stdio.h>

int main()

{
    float g, k;

    printf("Enter the number of grams");
    scanf("%f", &g);

    k = g / 1000;

    printf("The number of kilograms is:%f", k);

    return 0;
}