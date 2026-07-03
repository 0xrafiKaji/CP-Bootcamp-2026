#include <stdio.h>

int max_of_four(int num_1, int num_2, int num_3, int num_4);
int main()
{
    int num1, num2, num3, num4;
    printf("Enter four Int Numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int ans = max_of_four(num1, num2, num3, num4);

    printf("Max of Four: %d.\n", ans);

    return 0;
}

int max_of_four(int num_1, int num_2, int num_3, int num_4)
{

    return ((num_1 > num_2 ? num_1 : num_2) > (num_3 > num_4 ? num_3 : num_4)) ? (num_1 > num_2 ? num_1 : num_2) : (num_3 > num_4 ? num_3 : num_4);
}