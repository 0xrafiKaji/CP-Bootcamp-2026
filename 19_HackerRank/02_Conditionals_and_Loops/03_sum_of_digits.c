#include <stdio.h>

int main()
{
    int in_digit, sum = 0;
    scanf("%d", &in_digit);

    for (; in_digit != 0; in_digit /= 10)
    {
        int dis = in_digit % 10;
        sum += dis;
    }
    printf("%d\n", sum);

    return 0;
}