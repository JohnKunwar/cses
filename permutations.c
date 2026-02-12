/* A permutation of integers 1,2...,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.

Input
The only input line contains an integer n.

Output
Print a beautiful permutation of integers 1,2..,n. If there are several solutions, you may print any of them.
If there are no solutions, print "NO SOLUTION".
*/


#include <stdio.h>

void init_array(int arr[], int n);
int diff (int a, int b);
void print_array(int *arr, int n);
_Bool check_permutation(int *arr, int n);

int main(void)
{
    // takes input n 
    int n;
    scanf("%i", &n);

    // creates input array 1..n and result contain the beautiful permutation
    int in_arr[n], res_arr[n];
    init_array(in_arr, n); // assigns 1..n to input array

    int mid; // mid point
    if (n % 2 != 0)
	mid = n / 2; // for odd case 
    else
	mid = (n / 2) - 1; // for even case
    
    res_arr[0] = in_arr[mid]; // assigns first index to mid
    
    int front = 0, back = n - 1, i = 1; 
    while (back > mid) // adds one element from left-side and right-side with respect to mid from in_array to res 
	{
	    res_arr[i] = in_arr[back--]; 
	    i++;
	    if (front < mid)
		{
		    res_arr[i++] = in_arr[front++];
		}
	}

    // check if beautiful permutation is formed or not
    if (check_permutation(res_arr, n))
	print_array(res_arr, n);
    else
	printf("NO SOLUTION");
    
    return 0;

}

// initial array from 1 to n
void init_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
	arr[i] = i + 1;
}

// gives absolute difference
int diff (int a, int b)
{
    if (a > b)
	return a - b;
    return b - a;
}
// function to prints the array
void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
	printf("%i ", arr[i]);
}

// function to check the beautiful permutation exist or not
_Bool check_permutation(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
	{
	    if (diff(arr[i], arr[i + 1]) == 1)
		return 0;
	}

    return 1;
}
