#include <stdio.h>

int main()
{
    int in_num;
    int fst = 1, sec = 2, thr = 3, four = 4, fiv = 5, six = 6, sev = 7, eig = 8, lst = 9;
    scanf("%d", &in_num);

    if (fst <= in_num && in_num <= lst)
    {
        if (fst == in_num)
        {
            printf("one\n");
        }
        else if (sec == in_num)
        {
            printf("two\n");
        }
        else if (thr == in_num)
        {
            printf("three\n");
        }
        else if (four == in_num)
        {
            printf("four\n");
        }
        else if (fiv == in_num)
        {
            printf("five\n");
        }
        else if (six == in_num)
        {
            printf("six\n");
        }
        else if (sev == in_num)
        {
            printf("seven\n");
        }
        else if (eig == in_num)
        {
            printf("eight\n");
        }
        else if (lst == in_num)
        {
            printf("nine\n");
        }
    }
    else
    {
        printf("Greater than %d\n", lst);
    }

    return 0;
}