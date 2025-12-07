#include <stdio.h>

int main() {
    printf("Enter an integer\n");
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            count ++;
        }
    }
    if (count == 0) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}