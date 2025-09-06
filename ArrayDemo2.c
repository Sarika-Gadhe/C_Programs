#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};

    printf("%lu\n",sizeof(Arr));

    printf("%lu\n",Arr);
    printf("%lu\n",&Arr);

    printf("%lu\n",Arr+1);
    printf("%lu\n",(&Arr)+1);

    return 0;
}
