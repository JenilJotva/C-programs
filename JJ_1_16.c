#include <stdio.h>
int main()

{

    float a,b,c,d;

    printf("Enter principle amount : ");
    scanf("%f",&a);

    printf("Enter rate of interest : ");
    scanf("%f",&b);

    printf("Enter number of years : ");
    scanf("%f",&c);

    d = (a*b*c)/100;

    printf("The interest is %f: ",d);
    
    return 0 ;

}