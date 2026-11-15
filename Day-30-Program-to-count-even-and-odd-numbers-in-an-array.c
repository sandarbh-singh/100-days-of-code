// Program-to-count-even-and-odd-numbers-in-an-array

#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

    printf("Enter number of elements: ");
    scanf_s("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    printf("Even count = %d\n", evenCount);
    printf("Odd count = %d\n", oddCount);
    return 0;
}