/* Write a program by using a user-defined function for computing ⌊√n⌋ for
any positive integer n. Besides assignment and comparison, your
algorithm may only use the four basic arithmetical operations*/

#include <stdio.h>


int floorSqrt(int x)
{
	
	if (x == 0 || x == 1)
		return x;

	
	int i = 1, result = 1;
	while (result <= x) {
		i++;
		result = i * i;
	}
	return i - 1;
}
int  i=1,result =1;



int main()
{
	int x = 11;
	printf("%d\n", floorSqrt(x));
	return 0;
}

