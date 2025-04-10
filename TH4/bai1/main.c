#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Nhập tên: ");
    gets(name);
    printf("Nhập tuổi: ");
    scanf("%d", &age);

    for (int i = 0; i < age; i++) {
        printf("%s\n", name);
    }

    return 0;
}
