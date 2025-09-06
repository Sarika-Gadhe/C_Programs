#include<stdio.h>
#include<stdlib.h>

struct Demo
{
    int no;
    float f;
};

int main()
{
    struct Demo obj;            //static
    struct Demo *p = NULL;

    p=(struct Demo *)malloc(1* sizeof(struct Demo));
    if( p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Succesfully memory gets allocated");

    obj.no = 11;
    p ->no = 11;

    free(p);

    return 0 ;
}
