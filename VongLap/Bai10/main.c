#include <stdio.h>

// Hàm tính Fibonacci sử dụng đệ quy
long long fibonacci(int n) {
    if (n == 1 || n == 2) 
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Vui lòng nhập số nguyên dương!\n");
    } else {
        printf("Số Fibonacci thứ %d là: %lld\n", n, fibonacci(n));
    }

    return 0;
}
