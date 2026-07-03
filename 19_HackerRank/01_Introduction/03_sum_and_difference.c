#include <stdio.h>

int main()
{
    int int_num1, int_num2, int_sum = 0, int_dif = 0;
    float flo_num1, flo_num2, flo_sum = 0, flo_dif = 0;

    printf("Enter Two Int Numbers: ");
    scanf("%d %d", &int_num1, &int_num2);

    printf("Enter Two Float Numbers: ");
    scanf("%f %f", &flo_num1, &flo_num2);

    int_sum = int_num1 + int_num2;
    int_dif = int_num1 - int_num2;

    flo_sum = flo_num1 + flo_num2;
    flo_dif = flo_num1 - flo_num2;

    printf("Sum of Int: %d and Dif of Int: %d .\n", int_sum, int_dif);
    printf("Sum of Flo: %.2f and Dif of Flo: %.2f .\n", flo_sum, flo_dif);

    return 0;
}