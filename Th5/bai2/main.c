#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Nhập một từ: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        char c = tolower(str[i]);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Số nguyên âm: %d\n", vowels);
    printf("Số phụ âm: %d\n", consonants);

    return 0;
}
