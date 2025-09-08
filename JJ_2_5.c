#include <stdio.h>
int main ()
{
    float a,b;
    printf("Enter gross sales : ");
    scanf("%f",&a);
    if (20000>a>10000)
    {
        b = a - a*0.1;
        printf("Net sales is %f: ",b);
        
    }
    if (a>20000)
    {
        b = a - a*0.15;
        printf("Net sales is %f: ",b);

    }
    if (a<10000)
    {
        b = a - a*0.05;
        printf("Net sales is %f: ",b);
    }
}