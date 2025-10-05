#include <stdio.h>

int main() {
    int num, temp, digits[10], count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    do {
        digits[count] = temp % 10;
        temp = temp / 10;
        count++;
    } while (temp != 0);

    for (int i = count - 1; i >= 0; i--) {
        printf("Digit %d: %d\n", count - i, digits[i]);
    }

    return 0;
}

