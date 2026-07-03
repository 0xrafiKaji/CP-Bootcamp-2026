#include <stdio.h>
#include <stdlib.h>

void update(int *num1, int *num2)
{
    int old_num1 = *num1;
    int old_num2 = *num2;

    *num1 = old_num1 + old_num2;
    *num2 = abs(old_num1 - old_num2);
}

int main()
{
    int num1, num2;
    int *pon1 = &num1, *pon2 = &num2;

    scanf("%d %d", &num1, &num2);
    update(pon1, pon2);
    printf("Output: %d, %d.\n", num1, num2);

    return 0;
}