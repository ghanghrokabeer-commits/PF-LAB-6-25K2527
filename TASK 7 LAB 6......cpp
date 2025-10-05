#include <stdio.h>

int main() {
    char str[200];
    int i, j, end;

    printf("Enter a sentence: ");
    gets(str);

    for (end = 0; str[end] != '\0'; end++);

    printf("Reversed sentence: ");

    i = end - 1;
    while (i >= 0) {
        while (i >= 0 && str[i] == ' ')
            i--;
        if (i < 0)
            break;
        j = i;
        while (i >= 0 && str[i] != ' ')
            i--;
        int k = i + 1;
        while (k <= j) {
            printf("%c", str[k]);
            k++;
        }
        printf(" ");
    }

    return 0;
}
