#include <stdio.h>
int main()

{
    float a,b,c;

    printf("Enter length of the square : ");
    scanf("%f",&a);

    b = a*a;
    c = 4*a;

    printf("The area of the square is: %f\n ",b);
    printf("The perimeter of the square is:%f ",c);

    return 0 ;

}