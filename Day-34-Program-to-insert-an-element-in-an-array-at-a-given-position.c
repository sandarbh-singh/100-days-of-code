// Program-to-insert-an-element-in-an-array-at-a-given-position

#include <stdio.h>

int main() {
    int n, i, pos, value;

    printf("Enter number of elements: ");
    scanf_s("%d", &n);

    int arr[100 + 1]; // Using 'n'= 100 as an example
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    printf("Enter position (0 to %d) and element to insert: ", n);
    scanf_s("%d %d", &pos, &value);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
    }
    else {
        for (i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;

        printf("Array after insertion: ");
        for (i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}