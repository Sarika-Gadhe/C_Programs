#include <stdio.h>

int main()
{
    char ch = 'A';
    char *ptr1 = &ch;

    int no = 11;
    int *ptr2 = &no;

    float f = 90.90f;
    float *ptr3 = &f;

    double d = 90.9999;
    double *ptr4 = &d;

    printf("%C\n",*ptr1);
    printf("%d\n",*ptr2);
    printf("%f\n",*ptr3);
    printf("%f\n",*ptr4);

;    return 0;
}