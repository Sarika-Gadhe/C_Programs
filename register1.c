#include<stdio.h>

void Display()
{
    auto int i = 11;
    register int j = 21;

    printf("Value of i is :%d\n",i);
    printf("Value of j is : %d\n",j);
}

int main()
{
    Display();
    return 0;
}