#include <stdio.h>
 
int main()

{
    int a = 6, b = 3, c;

    c = a + b;

    printf("The sum of digits is: %d\n", c);

    c = a - b;
    printf("The difference of digits is: %d\n", c);

    c = a * b;

    printf("The product of digits is: %d\n", c);

    c = a/b;

    printf("The division of digits is: %d\n", c);

    return 0;
}