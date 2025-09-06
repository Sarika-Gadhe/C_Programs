/*
    1 : 9 AM
    2 : 10 AM
    3 : 11 AM
    4 : 12 AM
*/

#include<Stdio.h>

int main()
{
    int Std = 0;

    printf("Please Enter your Standard :\n");
    scanf("%d",&Std);

    if(Std == 1)
    {
        printf("Your exam is at 9 AM\n");
    }

    else if(Std == 2)
    {
        printf("Your exam is at 10 AM\n");
    }
    else if(Std == 3)
    {
        printf("Your exam is at 11 AM\n");
    }
    else if(Std == 4)
    {
        printf("Your exam is at 12 AM\n");
    }
    else
    {
        printf("Wrong Input \n");
    }

    return 0;
}