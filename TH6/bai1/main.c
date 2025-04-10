#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Nhập chuỗi: ");
    gets(str); // dùng cho C cũ, nếu C hiện đại thì dùng fgets

    reverse(str);

    printf("Chuỗi sau khi đảo: %s\n", str);

    return 0;
}
