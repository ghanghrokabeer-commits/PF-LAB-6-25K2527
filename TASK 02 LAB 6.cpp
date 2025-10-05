#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;
    printf("enter a 5-digit number: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999) {
        printf("enter a valid 5-digit number!\n");
        return 0;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("sum of digits = %d\n", sum);

    if (sum % 2 == 0) {
        int i, flag = 0;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is NOT a prime number.\n", num);
    }

    else {
        int reverse = 0;
        temp = num;

        while (temp != 0) {
            digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }

        if (num == reverse)
            printf("%d is a PALINDROME.\n", num);
        else
            printf("%d is NOT a PALINDROME.\n", num);
    }

    return 0;
}

