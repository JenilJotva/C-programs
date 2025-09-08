#include <stdio.h>
int main()

{
    float f, c;

    printf("Enter farenheit : ");
    scanf("%f",&f);

    c = (0.55)*(f-32);

    printf("The celcius is %f : ",c);

    return 0 ;
    

}