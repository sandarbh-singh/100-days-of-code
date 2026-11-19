// Day-42-Program-to-convert-a-lowercase-string-to-uppercase-without-using-built-in-functions

#include <stdio.h>

int main() {
    char s[100];
    int i = 0;
    fgets(s, 100, stdin);
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        i++;
    }
    printf("%s", s);
    return 0;
}