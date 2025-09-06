#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;
    int size = 0;

    printf("Enter number of element that you want to allocate :\n");
    scanf("%d", &size);

    p = (int *)malloc(size * sizeof(int));
    if(p == NULL)
    {
        printf("unable to allocate memory\n");
        return -1;
    }

    printf("Memory gets allocated successfully\n");

    // use of memory

    free(p);
    return 0;
}