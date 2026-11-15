// Program-to-print-the-spaced-vertical-star-groups-pattern

#include <stdio.h>

int main() {
    int rows[] = { 1, 3, 5, 3, 1 };
    int num_groups = sizeof(rows) / sizeof(rows[0]);
    int g, i;

    for (g = 0; g < num_groups; g++) {
        for (i = 0; i < rows[g]; i++) {
            printf("*\n");
        }
        if (g < num_groups - 1) {
            printf("\n");
        }
    }
    return 0;
}