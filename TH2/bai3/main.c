#include <stdio.h>

int main() {
    int a = 10, b = 8, c = 6, d = 5, e = 2;
    int iResult;

    iResult = a - b - c - d;
    printf("1. %d\n", iResult);

    iResult = a - b + c - d;
    printf("2. %d\n", iResult);

    iResult = a + b / c / d;
    printf("3. %d\n", iResult);

    iResult = a + b / c * d;
    printf("4. %d\n", iResult);

    iResult = a / b * c * d;
    printf("5. %d\n", iResult);

    iResult = a % b / c * d;
    printf("6. %d\n", iResult);

    iResult = a % b % c % d;
    printf("7. %d\n", iResult);

    iResult = a - (b - c) - d;
    printf("8. %d\n", iResult);

    iResult = (a - (b - c)) - d;
    printf("9. %d\n", iResult);

    iResult = a - ((b - c) - d);
    printf("10. %d\n", iResult);

    iResult = a % (b % c) * d * e;
    printf("11. %d\n", iResult);

    iResult = a + (b - c) * d - e;
    printf("12. %d\n", iResult);

    iResult = (a + b) * c + d * e;
    printf("13. %d\n", iResult);

    iResult = (a + b) * (c / d) % e;
    printf("14. %d\n", iResult);

    return 0;
}
