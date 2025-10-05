#include <stdio.h>

void star_pattern_while(int n) {
    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return;
    }

    int mid = n / 2 + 1;
    int i = 1;

    // Upper half
    while (i <= mid) {
        int j = 1;
        while (j <= mid - i) {
            printf(" ");
            j++;
        }
        int k = 1;
        while (k <= 2 * i - 1) {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }

    // Lower half
    i = mid - 1;
    while (i >= 1) {
        int j = 1;
        while (j <= mid - i) {
            printf(" ");
            j++;
        }
        int k = 1;
        while (k <= 2 * i - 1) {
            printf("*");
            k++;
        }
        printf("\n");
        i--;
    }
}

