#include   <stdio.h>
int main()

{
    float a,b,c,d;

    printf("Enter length : ");
    scanf("%f",&a);

    printf("Enter breadth : ");
    scanf("%f",&b);
    
    c = a*b;
    d = 2*(a+b);

    printf("The area is: %f\n ",c);
    printf("The perimeter is: %f  ",d);

    return 0;

}