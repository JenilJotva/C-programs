#include <stdio.h>

int main()
 {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (num % 7 == 0)
     {
        printf("%d is divisible by 7", a);
    } else 
    {
        printf("%d is NOT divisible by 7", a);
    }

    return 0;
}
