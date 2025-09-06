#include<stdio.h>

int main()
{
    char ch = 'M';
    int no = 11;
    float marks = 89.90f;
    double data = 98.8986657;

    printf("Value of ch is : %c\n",ch);
    printf("Value of no is : %d\n",no);
    printf("Value of no is : %f\n",marks);
    printf("Value of no is : %f\n",data);

    printf("size of character is : %d bytes\n",sizeof(ch));
    printf("size of integer is : %d bytes\n",sizeof(no));
    printf("size of float is : %d bytes\n",sizeof(marks));
    printf("size of double is : %d bytes\n",sizeof(data));
 

    return 0;
}