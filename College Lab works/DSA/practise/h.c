#include<stdio.h>

int main()
{
int a[] = {10, 30, 50};
int *p, *q;
p = a;
q = a+2;
printf("%d %d",*p, *q);
return 0;
}