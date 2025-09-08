#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter gross salary : ");
    scanf("%f",&a);
    if (a>=10000)
    {
        b = a + a*0.1 - a*0.03;
        printf("Net is %f : ",b);
    }
    if (10000>=a>=5000)
    {   
        b = a + a*0.07 - a*0.02;
        printf("Net is %f : ",b);

    }


}