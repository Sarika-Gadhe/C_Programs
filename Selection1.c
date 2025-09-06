#include<stdio.h>

void DisplayResult(int Value)
{
    if(Value < 35)
    {
        printf("Your are fail\n");
    }
    else{
        printf("Your are pass\n");
    }
}

int main()
{
    int Marks = 0;

    printf("Enter your marks :\n");
    scanf("%d",&Marks);

    DisplayResult(Marks);

    printf("End of application\n");

    return 0;
}