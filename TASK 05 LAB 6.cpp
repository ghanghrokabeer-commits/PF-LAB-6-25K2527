#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int a = 0, b = 1, next;
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            next = a + b;
            printf("%d ", next);
            a = b;
            b = next;
        }
        printf("\n");
    }

    return 0;
}

