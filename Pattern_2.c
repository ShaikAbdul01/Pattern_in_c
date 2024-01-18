#include <stdio.h>
int main()
{
    /* 
    1
  21
 321
4321
     */
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = k; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        s--;
        k++;
    }
    return 0;
}