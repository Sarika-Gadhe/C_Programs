#include<stdio.h>

int main(){

    int i = 0;
    i = 1;                         //1

    while(i <= 5)                 //2
    {
        printf("%d\n",i);         //4
        i++;                       //3
    }
    return 0;
}