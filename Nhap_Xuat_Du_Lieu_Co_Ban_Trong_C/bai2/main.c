#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ngay,thang,nam;
    printf("Vui long nhap lan luot ngay thang nam: \n");
    scanf("%d", &ngay);
    scanf("%d", &thang);
    scanf("%d", &nam);
    printf("%d/%d/%d",ngay,thang,nam);
    return 0;
}
