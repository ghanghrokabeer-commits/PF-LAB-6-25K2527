#include <stdio.h>

int main() {
    char ch;
    char username[5], password[6];
    char login_user[5], login_pass[6];
    int i;

    // Registration loop
    while (1) {
        printf("Register\nEnter username (5 alphabets): ");

        for (i = 0; i < 5; i++) {
            scanf(" %c", &ch);
            if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
                printf("? Invalid character in username.\n");
                while (getchar() != '\n'); // clear input
                continue;
            }
            username[i] = ch;
        }

        printf("Enter password (6 chars, 1 digit, 1 uppercase, 1 lowercase): ");
        int has_digit = 0, has_upper = 0, has_lower = 0;

        for (i = 0; i < 6; i++) {
            scanf(" %c", &ch);
            if (ch >= '0' && ch <= '9') has_digit = 1;
            else if (ch >= 'A' && ch <= 'Z') has_upper = 1;
            else if (ch >= 'a' && ch <= 'z') has_lower = 1;
            password[i] = ch;
        }

        if (!has_digit || !has_upper || !has_lower) {
            printf("? Password must contain digit, uppercase, and lowercase.\n");
            while (getchar() != '\n'); // clear input
            continue;
        }

        printf("? Account Created Successfully!\n");
        break;
    }

    // Login loop
    while (1) {
        printf("\nLogin\nEnter username: ");
        int match_user = 1;
        for (i = 0; i < 5; i++) {
            scanf(" %c", &ch);
            login_user[i] = ch;
            if (ch != username[i]) match_user = 0;
        }

        printf("Enter password: ");
        int match_pass = 1;
        for (i = 0; i < 6; i++) {
            scanf(" %c", &ch);
            login_pass[i] = ch;
            if (ch != password[i]) match_pass = 0;
        }

        if (match_user && match_pass) {
            printf("?? Welcome, you are now logged in.\n");
            break;
        } else {
            printf("? Incorrect username or password. Try again.\n");
            continue;
        }
    }

    return 0;
}

