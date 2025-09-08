#include <stdio.h>
int main()

{
    float g,s;

    printf("Enter gross salary : ");
    scanf("%f",&g);

    s = g + g*0.1 - g*0.03;

    printf("Net salary is %f; ",s);

    return 0;

}