#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a string: ");
    char str[100];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != str[strlen(str) - i - 1]) {
            printf("%s is not a palindrome.\n", str);
            return 0;
        }
    }
    printf("%s is a palindrome.\n", str);
    return 0;
}