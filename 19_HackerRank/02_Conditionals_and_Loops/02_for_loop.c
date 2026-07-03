#include <stdio.h>

int main()
{
    int in_num1, in_num2, i;
    int fst = 1, sec = 2, thr = 3, four = 4, fiv = 5, six = 6, sev = 7, eig = 8, lst = 9;
    scanf("%d %d", &in_num1, &in_num2);

    for (i = in_num1; i <= in_num2; i++)
    {
        if (fst <= i && i <= lst)
        {
            if (fst == i)
            {
                printf("one\n");
            }
            else if (sec == i)
            {
                printf("two\n");
            }
            else if (thr == i)
            {
                printf("three\n");
            }
            else if (four == i)
            {
                printf("four\n");
            }
            else if (fiv == i)
            {
                printf("five\n");
            }
            else if (six == i)
            {
                printf("six\n");
            }
            else if (sev == i)
            {
                printf("seven\n");
            }
            else if (eig == i)
            {
                printf("eight\n");
            }
            else if (lst == i)
            {
                printf("nine\n");
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }
    return 0;
}