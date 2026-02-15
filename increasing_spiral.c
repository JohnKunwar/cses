/*
  A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

  INPUT:
  The first input line contains an integer t: the number of tests.
  After this, there are t lines, each containing integers y and x.

  Output: For each test, print the number in row y and column x.
*/


#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    for(int i = 0; i < n; i++)
        {
            long int x, y; // row and col
            scanf("%li %li", &x, &y);

            long int val;
            // basically all these check are whether to start from row or col base on the max and min value 
            if (x == y && x % 2 == 0) 
                {
                    val = x * x;
                    for (long int j = 1; j < y; j++)
                        val--;
                }
            else if (x == y)
                {
                    val = y * y;
                    for (long int j = 1; j < x; j++)
                        val--;
                }
            else if (x > y && x % 2 == 0)
                {
                    val = x * x;
                    for (long int j = 1; j < y; j++)
                        val--;
                }
            else if (x > y)
                {
                    val = (x - 1) * (x - 1) + 1;
                    for (long int j = 1; j < y; j++)
                        val++;
                }
            else if ( x < y && y % 2 == 0)
                {
                    val = (y - 1) * (y - 1) + 1;
                    for (long int j = 1; j < x; j++)
                        val++;
                }
            else
                {
                    val = y * y;
                    for (long int j = 1; j < x; j++)
                        val--;
                }

            printf("%li\n", val);
        }
    
    return 0;
}
