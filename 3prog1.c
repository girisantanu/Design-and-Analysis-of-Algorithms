/* Let A be a list of n (not necessarily distinct) integers. Write a program by
using User Defined Function (UDF)s to test whether any item occurs
more than ⌈n/2⌉ times in A.
a) UDF should take O(n^2) time and use no additional space.
b) UDF should take O(n) time and use O (1) additional space*/


#include <stdio.h>


int sumTwoNum(int, int); 
float averageTwoNum(int, int);

int main()
{
    int number1, number2;
    int sum;
    float avg;

    printf("Enter the first integer number: ");
    scanf("%d", &number1);

    printf("Enter the second integer number: ");
    scanf("%d", &number2);

   
    sum = sumTwoNum(number1, number2);
    avg = averageTwoNum(number1, number2);

    printf("Number1: %d, Number2: %d\n", number1, number2);
    printf("Sum: %d, Average: %f\n", sum, avg);

    return 0;
}

int sumTwoNum(int x, int y)
{
    
    int sum;
    sum = x + y;
    return sum;
}



float averageTwoNum(int x, int y)
{
    
    float average;
    return ((float)(x) + (float)(y)) / 2;
}
 
