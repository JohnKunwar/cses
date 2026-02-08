/* You are given all numbers between 1,2,...,n except one. Your task is to find the missing number. */

#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);

    // initialize the array of n with initial value 0
    int missing_number[n];
    int t, i;
    for (i = 0; i < n - 1; i++)
	{
	    scanf("%i", &t);
	    missing_number[t - 1] = 1; // initialze the array element of that number
	}

    for ( i = 0; i < n; i++)
	{
	    if (missing_number[i] != 1) // returns of index of missing number
		break;
	}

    printf("%i", (i + 1));
    
    return 0;
}
