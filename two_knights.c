#include <stdio.h>
#include <stdbool.h>

int facto (int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        {
            res = res * i;
        }

    return res;
}
int combination ( int n, int r)
{
    if (n == 1)
        {
            return 0;
        }
    int res = facto(n) / (facto(r) * facto(n - r));
    return res;
}

bool check (int i, int j, int n)
{
    int count = 0;
    if (((i + 2) < n) && ((j + 1) < n))
        {
            count++;
        }
    if (((i + 2) < n) && ((j - 1) < n) && (j - 1) > 0)
        {
            count++;
        }
    if (((i - 2) < n) && ((j + 1) < n) && (i - 2) > 0)
        {
            count++;
        }
    if (((i - 2) < n) && ((j - 1) < n) && (i - 2) > 0 && (j - 1) > 0)
        {
            count++;
        }

    if (((i + 1) < n) && ((j + 2) < n))
        {
            count++;
        }
    if (((i - 1) < n) && ((j + 2) < n) && (i - 1) > 0)
        {
            count++;
        }
    if (((i + 1) < n) && ((j - 2) < n) && (j - 2) > 0)
        {
            count++;
        }
    if (((i - 1) < n) && ((j - 2) < n) && (j - 2) > 0 && (i - 1) > 0)
        {
            count++;
        }
    //    printf("x : %i y : %i\nx", i, j);
    //printf("count: %i\n", count);
    return count;
}
int main(void)
{
    int k;
    scanf("%i", &k);



    for (int l = 1; l <= k; l++)
        {
            int count = combination(l * l, 2);
            for (int i = 0; i < l; i++)
                {
                    for (int j = 0; j < l; j++)
                        {
                            count = count - check(i, j, l);
                        }
                }
            printf("%i\n", count);            
        }


    return 0;
}
