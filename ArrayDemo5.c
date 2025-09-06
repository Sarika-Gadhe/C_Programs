#include<stdio.h>

int main()
{
    char chArr[] = {'A','B','C'};
    int iArr[]={10,20,30};
    float fArr[]={10.0f,20.0f,30.0f};
    double dArr[]={10.001,20.001,30.001};

    printf("%d\n",sizeof(chArr));
    printf("%d\n",sizeof(iArr));
    printf("%d\n",sizeof(fArr));
    printf("%d\n",sizeof(dArr));

    return 0;
}