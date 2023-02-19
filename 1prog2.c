/*2. Write a program to store random numbers into an array of n integers,
where the array must contain some duplicates. Do the following:
A) Find out the total number of duplicate elements.
B) Find out the most repeating element in the array.*/
#include <stdio.h>
// #include<stdlib.h>
#include<string.h>
int main()
{
    int length;
    int Array[50] = {3, 4, 6, 7, 84, 33, 7654, 35, 93};
    length = size(Array) / sizeof(Array[0]);

    printf("Total number of duplicate element:\n");
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; i < length; i++)
        {
            if (Array == i || Array == j)
                printf("%d", Array[j]);
        }
    }

    return 0;
}
