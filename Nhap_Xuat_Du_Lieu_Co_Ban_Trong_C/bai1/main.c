#include <stdio.h>
int main()
{
    double x;
    printf("Vui long nhap x\n");
    scanf("%lf", &x);
    printf("x^2 = %.2lf\n", x*x);
    printf("x^3 = %.2lf\n", x*x*x);
    printf("x^4 = %.2lf\n", x*x*x*x);
    return 0;
}
