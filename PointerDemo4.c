#include<stdio.h>

int main()
{
    int no = 11;

    int *p = &no;
    int *q = &no;

    printf("%d\n", *p);
    printf("%d\n",*q);
    
    return 0;
}