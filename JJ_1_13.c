#include <stdio.h>
int main()

{
    float a,b,c,d;

    printf("Enter the number of Bytes:");
    scanf("%f", &a);

    b = a/1024;
    c = b/1024;
    d = c/1024;

    printf("The number of KBs is:%f\n", b);
    printf("The number of MBs is:%f\n", c);
    printf("The number of GBs is:%f\n", d);

    return 0;
}