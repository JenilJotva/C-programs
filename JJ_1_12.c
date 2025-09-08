#include <stdio.h>

int main()

{
    float k, g;

    printf("Enter the number of kilograms:");
    scanf("%f", &k);

    g = k * 1000;

    printf("The number of grams is:%f", g);

    return 0;
}