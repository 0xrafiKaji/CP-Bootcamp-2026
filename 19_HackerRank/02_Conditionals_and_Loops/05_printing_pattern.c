#include <stdio.h>

int main()
{
    int in, i, j;
    scanf("%d", &in);

    for (i = 0; i < in; i++)
    {
        for (j = in; j > 0; j--)
        {
            printf("%d", j);
        }
        for (j = 2; j <= in; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}