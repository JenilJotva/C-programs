#include <stdio.h>

int main()

{
    float c, f;
    printf ("Enter celcius : ");
    scanf("%f",&c);

    f = (9*c/5) + 32;

    printf("The given celcius into fahrenheit is  :%f", f);
    return 0 ;
}