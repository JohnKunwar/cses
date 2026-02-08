/* You are given a DNA sequence: a string consisting of characters A, C, G, and T.
   Your task is to find the longest repetition in the sequence. This is a maximum-length
   substring containing only one type of character.

   INPUT: ATTCGGA
   output: 3
*/
#include <stdio.h>

int main(void)
{
    char buffer[1000001]; // constraint is 10^6, so making my buffer 10^6 + 1 to include null character
    fgets(buffer,1000001, stdin );

    int max = 1; // stores the maximum value
    int count = 1;// counts the current streak
    char prev = buffer[0];
    
    for (int i = 1; buffer[i] != '\0'; i++)
	{
	    if(buffer[i] == prev) 
		count++; 
	    else
		count = 1; // current count should be 1
	    
	    prev = buffer[i]; 

	    if (count > max)
		max = count;
		
	}

    printf("%i", max);
    
    return 0;
}
