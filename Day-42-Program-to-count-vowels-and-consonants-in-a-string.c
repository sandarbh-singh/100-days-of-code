// Day-42-Program-to-count-vowels-and-consonants-in-a-string

#include <stdio.h>

int main() {
    char s[100];
    int i = 0, v = 0, c = 0;
    fgets(s, 100, stdin);
    while (s[i] != '\0') {
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') v++;
            else c++;
        }
        i++;
    }
    printf("Vowels = %d, Consonants = %d\n", v, c);
    return 0;
}