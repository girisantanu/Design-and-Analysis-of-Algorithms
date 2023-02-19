#include<stdio.h>

int main()
{
int x, y, z, a;
printf("Type values of x, y and z\n");
scanf("%d %d %d",&x,&y,&z);
printf("On rotation we found the following values assigned to x,y,z.\n");
a=z;
z=x;
x=y;
y=a;
printf("x=%d, y=%d, z=%d", x,y,z);
getch();
}