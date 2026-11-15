// Program-to-insert-an-element-in-a-sorted-array-at-the-appropriate-position

#include <stdio.h>

int main() {
    int n, i, value, pos;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    int arr[100 + 1]; // Using 100 as an example
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &value);

    pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > value) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;

    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
