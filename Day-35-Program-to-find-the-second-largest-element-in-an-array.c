// Day-35-Program-to-find-the-second-largest-element-in-an-array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array needs at least 2 elements.\n");
        return 0;
    }

    int arr[100]; // Using 'n'=100 as an example
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No distinct second largest element found.\n");
    }
    else {
        printf("Second largest element = %d\n", secondLargest);
    }
    return 0;
}