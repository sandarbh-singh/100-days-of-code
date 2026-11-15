// Program-to-search-in-a-sorted-array-using-binary-search

#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // Using 100 has an example
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found != -1) {
        printf("Element %d found at index %d using binary search.\n", key, found);
    }
    else {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}