#include<stdio.h>

int main()
{
    int no = 11;
    int *p = &no;
    int **q = &p;
    int ***r = &q;

    printf("%d\n",no);
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d\n",***r);

    return 0;
}