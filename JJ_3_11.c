#include <stdio.h>

int main() {
    int i;
    char name[50]; 
    printf("Enter your name: ");
    scanf("%s", name); 

    for (i = 1; i <= 5; i++) {
        printf("%d. %s\n", i, name);
    }

    return 0;
}
