#include <stdio.h>

int main() {
    int i, j, n;

    printf("Qual o nnmero de ramos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            putchar('A' + j - 1);
        }
        putchar('\n');
    }

    return 0;
}