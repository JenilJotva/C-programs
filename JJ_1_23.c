#include    <stdio.h>
int main ()

{
    float a,b,c,d,e;

    printf("Enter marks of subject 1 : ");
    scanf("%f",&a);

    printf("Enter marks of subject 2 : ");
    scanf("%f",&b);

    printf("Enter marks of subject 3 : ");
    scanf("%f",&c);

    d = (a+b+c);
    e = (a+b+c)/3;

    printf("Total is %f: ",d);
    printf("Average is %f: ",e);

    return 0;
}