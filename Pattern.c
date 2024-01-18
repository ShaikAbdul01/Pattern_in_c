#include <stdio.h>
int main()
{
    /*
    #
  ##-
 ###--
####---
 ###--
  ##-
   #
     */
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j += 2)
        {
            if (j % 2 != 0)
            {
                printf("#");
            }
        }
        for (int j = 2; j <= k; j += 2)
        {
            if (n % 2 == 0)
            {
                printf("-");
            }
        }
        if (i < n)
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }
        printf("\n");
    }
    return 0;
}