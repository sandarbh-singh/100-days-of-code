// Program-to-find-the-1’s-complement-of-a-binary-number-and-print-it

#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];
    int i, valid = 1;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            valid = 0;
            break;
        }
    }

    if (!valid) {
        printf("Invalid binary input.\n");
    }
    else {
        for (i = 0; binary[i] != '\0'; i++) {
            if (binary[i] == '0') {
                binary[i] = '1';
            }
            else {
                binary[i] = '0';
            }
        }
        printf("1's Complement = %s\n", binary);
    }
    return 0;
}