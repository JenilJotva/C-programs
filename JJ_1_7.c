#include <stdio.h>

int main()

{
    int a, b;

    printf("Enter number of minutes:");
    scanf("%d", &a);

    b = a/60;

    printf("The number of hours is: %d", b);

    return 0;
}