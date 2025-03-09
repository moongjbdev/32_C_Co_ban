#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    printf("Nhập hai số nguyên: ");
    scanf("%d %d", &a, &b);
    printf("Ước chung lớn nhất của %d và %d là: %d\n", a, b, gcd(a, b));
    printf("Bội chung nhỏ nhất của %d và %d là: %d\n", a, b, lcm(a, b));
    return 0;
}
