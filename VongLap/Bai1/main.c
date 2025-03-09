#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum = 0;
    for(int i = 0; i < 10; i++){
        printf("vui long nhap so thu %d\n", i + 1);
        float a;
        scanf("%f",&a);
        sum += a;
    }
    printf("Sum = %lf\n", sum);
    return 0;
}
