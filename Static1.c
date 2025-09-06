#include<stdio.h>

void Display()
{
    int i = 11;
    i++;
    printf("Value of i is :%d\n",i);
}
int main()
{
    Display();
    Display();
    Display();

    return 0;
}