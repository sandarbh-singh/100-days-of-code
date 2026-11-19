// Day-61

#include <stdio.h>

int main() {
    int n, k, a[100], i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    for (i = 0; i <= n - k; i++) {
        int found = 0;
        for (j = i; j < i + k; j++) {
            if (a[j] < 0) {
                found = a[j];
                break;
            }
        }
        printf("%d ", found);
    }
    printf("\n");
    return 0;
}