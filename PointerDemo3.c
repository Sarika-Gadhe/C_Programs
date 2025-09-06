#include <stdio.h>

int main()
{
    char ch = 'A';
    int no = 11;
    float f = 90.90f; 
    double d = 90.9999;
   
    void *p = NULL;

    p = &ch;
    printf("%C\n",*(char *)p);

    p = &no;
    printf("%d\n",*(int *)p);

  

;    return 0;
}