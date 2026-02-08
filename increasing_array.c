/* You are given an array of n integers. You want to modify the array so that it is increasing,
   i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input: 5
       3 2 5 1 7
Output: 5       
*/

#include <stdio.h>
int main(void)
{
    long n, count = 0;
    scanf("%ld", &n);

    long int arr[n];
    for (int i = 0; i < n; i++)
	scanf("%ld", &arr[i]); // taking input

    for (int i = 1; i < n; i++)
	{
	    while(arr[i] < arr[i - 1]) // comparing with adjacent item
		{
		    arr[i]++;
		    count++;
		}
	}

    printf("%ld", count);
    return 0;
}
