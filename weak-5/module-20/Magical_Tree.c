#include <stdio.h>

int main() {
    int n, s, k;
    scanf("%d", &n);
    int l = (n + 1) / 2 + 5;
    s = l - 1;
    k = 1;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < s; j++) {
            printf(" ");
        }
        for (int j = 0; j < k; j++) {
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }
    for (int i = 0; i < 5; i++) {
        for (int i = 0; i < ((l * 2) - 1 - n) / 2; i++) {
            printf(" ");
        }
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
