// Program-to-search-for-an-element-in-an-array-using-linear-search

#include <stdio.h>

int main() {
    int n, i, key, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Element %d found at index %d.\n", key, found);
    }
    else {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}