// /*Write a program to search an element x in an array of n integers using
// binary search algorithm that uses divide and conquer technique. Find out
// the best case, worst case, and average case time complexities for different
// values of n and plot a graph of the time taken versus n. The n integers can
// be generated randomly, and x can be chosen randomly, or any element of
// the array or middle or last element of the array depending on type of time
// complexity analysis*/


#include <stdio.h>
int binarysearch(int a[],int beginning, int ending, int value)
{
    int midium;
    if (ending >= beginning)
    {
        midium = (beginning + ending)/2;
    
    
    if (a[midium] == value)
    {
        return midium + 1;
    }

    else if (a[midium]<value)
    {
        return binarysearch ( a,  midium +1 ,  ending, value);
    }
    else
    {
        return binarysearch(a,beginning,midium-1,value);
    }
 }
    return -1;
}




int main()
{
    int a[]={11,14,25,30,40,41,52,57,70};
    int value=40;
    int n=sizeof(a)/sizeof(a[0]);
    int res=binarysearch(a,0,n-1,value);
    printf("The elements of the array are :");
    for (int i = 0; i < n; i++)
    // {
        printf("%d ",a[i]);
    // }
    printf("\nElement to be searched is : %d",value);
    if(res==-1)
    // {
    printf("\n Element is not present in the array");
    // }
    else
    // {
    printf("\nElement is present at %d position of array",res);
    // }
    return 0;
}

