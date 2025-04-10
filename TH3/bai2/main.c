#include <stdio.h>

int main() {
    char choice;

    printf("Nhập một ký tự: ");
    scanf(" %c", &choice);  // thêm dấu cách để bỏ qua ký tự Enter cũ

    switch (choice) {
        case 'A': case 'a':
            printf("Ada\n");
            break;
        case 'B': case 'b':
            printf("Basic\n");
            break;
        case 'C': case 'c':
            printf("COBOL\n");
            break;
        case 'D': case 'd':
            printf("dBASE III\n");
            break;
        case 'F': case 'f':
            printf("Fortran\n");
            break;
        case 'P': case 'p':
            printf("Pascal\n");
            break;
        case 'V': case 'v':
            printf("Visual C++\n");
            break;
        default:
            printf("Không có ngôn ngữ lập trình tương ứng.\n");
    }

    return 0;
}
