#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char names[5][MAX];
    char title[MAX];

    printf("Nhap 5 ten:\n");
    for (int i = 0; i < 5; i++) {
        printf("Ten %d: ", i + 1);
        fgets(names[i], MAX, stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Xoá ký tự newline
    }

    printf("Nhap chuc danh: ");
    fgets(title, MAX, stdin);
    title[strcspn(title, "\n")] = '\0'; // Xoá ký tự newline

    printf("\nCac ten sau khi them chuc danh:\n");
    for (int i = 0; i < 5; i++) {
        char fullName[MAX];
        snprintf(fullName, MAX, "%s %s", title, names[i]);
        printf("%s\n", fullName);
    }

    return 0;
}
