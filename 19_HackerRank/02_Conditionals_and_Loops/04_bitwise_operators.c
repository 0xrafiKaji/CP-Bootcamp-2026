#include <stdio.h>

int main()
{
    int n, k, round1, round2;

    scanf("%d %d", &n, &k);
    int currentAnd, currentOr, currentXor;
    int maxAnd = 0, maxOr = 0, maxXor = 0;

    for (round1 = 1; round1 <= n; round1++)
    {
        for (round2 = round1 + 1; round2 <= n; round2++)
        {
            currentAnd = round1 & round2;
            if (currentAnd < k && currentAnd > maxAnd)
            {

                maxAnd = currentAnd;
            }
            currentOr = round1 | round2;
            if (currentOr < k && currentOr > maxOr)
            {
                maxOr = currentOr;
            }
            currentXor = round1 ^ round2;
            if (currentXor < k && currentXor > maxXor)
            {
                maxXor = currentXor;
            }
        }
    }

    printf("%d\n", maxAnd);
    printf("%d\n", maxOr);
    printf("%d\n", maxXor);

    return 0;
}