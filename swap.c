#include<stdio.h>
#include<iostream>
void swap( int*,int*);
int main()
{
int a=3;
int b=4;
printf("original value of a=%d\n", a);
printf("original value of b=%d\n", b);
swap(&a,&b);
printf("after swaping value of a=%d\n", a);
printf("after swaping value of b=%d\n", b);
return 0;
}
void swap(int *x,int *y)
{ int t;
t=*x;
*x=*y;
*y=t;
}
