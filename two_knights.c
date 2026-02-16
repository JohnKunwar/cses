#include <stdio.h>
#include <stdbool.h>


long long int invalid_move (long long int i, long long int j, long long int n)
{
    long long int invalid = 0;

    if (((i + 2) < n) && ((j + 1) < n))
        {
            invalid++;
        }
    if (((i + 2) < n) && ((j - 1) < n) && (j - 1) >= 0)
        {
            invalid++;
        }
    if (((i - 2) < n) && ((j + 1) < n) && (i - 2) >= 0)
        {
            invalid++;
        }
    if (((i - 2) < n) && ((j - 1) < n) && (i - 2) >= 0 && (j - 1) >= 0)
        {
            invalid++;
        }

    if (((i + 1) < n) && ((j + 2) < n))
        {
            invalid++;
        }
    if (((i - 1) < n) && ((j + 2) < n) && (i - 1) >= 0)
        {
            invalid++;
        }
    if (((i + 1) < n) && ((j - 2) < n) && (j - 2) >= 0)
        {
            invalid++;
        }
    if (((i - 1) < n) && ((j - 2) < n) && (j - 2) >= 0 && (i - 1) >= 0)
        {
            invalid++;
        }

    return invalid;
}

int main(void)
{
    int n;
    scanf("%i", &n);
    printf("%lli ", invalid_move(0,0, 3));
    return 0;
}
