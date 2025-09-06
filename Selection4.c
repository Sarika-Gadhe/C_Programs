#include<stdio.h>

int main()
{
    int Std = 0;

    printf("Enter your Standard\n");
    scanf("%d",&Std);

    switch(Std)
    {
        case 1:
                printf("Your EXam is at 9 AM");
                break;
                
        case 2:
                 printf("Your exam is at 10 AM");
                  break;
          
        case 3:
                  printf("Your exam is at 11 AM");
                    break;

        case 4:
                printf("Your exam is at 12");
                break;

           default:
                printf("Wrong input\n");
                     
    }

    return 0;
}