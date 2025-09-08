#include <stdio.h>
int main()

{
    float a, b, c, d;

    printf("Enter the number of Dollars: ");
    scanf("%f", &a);

    b = a / 48;
    c =  b * 70;
    
    printf("The number of Pounds is: %f", c);

    return 0;
    
}