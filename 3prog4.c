/*Design a data structure to maintain a set S of n distinct integers that
supports the following two operations:
a) INSERT (x, S): insert integer x into S
b) REMOVE-BOTTOM-HALF(S): remove the smallest ⌈ n/2⌉
integers from S. Write a program by using UDFs that give the
worst-case time complexity of the two operations INSERT(x, S) in
O(1) time and REMOVE-BOTTOM-HALF(S) in O(n) time*/
#include <stdio.h>
int l, S[10];
void INSERT(int X)
{
    int t = S[l + 1];
    S[l + 1] = X;
    S[l + 2] = t;
    l++;
}
void remove_bottom_half()
{
    for (int i = (l - (l / 2)) - 1; i < l; ++i)
    {
        S[i] = 0;
    }
    l = l / 2;
}
void disp()
{
    for (int i = 0; i < l; ++i)
    {
        printf("%d  ", S[i]);
    }
}

int main()
{
    printf("enter the length:");
    scanf("%d", &l);
    int n;
    printf("enter the elements:");
    for (int i = 0; i < l; i++)
        scanf("%d", &S[i]);

    printf("Enter the element :");
    scanf("%d", &n);
    INSERT(n);
    disp();
    printf("After removing bottom:");
    remove_bottom_half();
    disp();
}




