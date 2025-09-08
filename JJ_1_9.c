#include <stdio.h>

int main()

{
    float a, b;

    printf("Enter the number of Rupees:");
    scanf("%f", &a);

    b = a / 48;

    printf("The number of Dollars is: %f", b);

    return 0;
}