#include <stdio.h>
int main ()

{
    float g,s;

    printf("Enter gross sales : ");
    scanf("%f",&g);

    s = g - g*0.1;

    printf("Net sales is %f: ",s);
    
    return 0;
}