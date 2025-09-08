#include <stdio.h>

int main()

{
    int a, b;

    printf("Enter number of Hours:");
    scanf("%d", &a);

    b = a * 60;

    printf("The number of minutes is: %d", b);
    return 0;
}