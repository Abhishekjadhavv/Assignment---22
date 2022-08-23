// Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("How many numbers your want?\n");
    scanf("%d", &size);
    int *ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
        printf("Sorry memory allocation is failed\n");
    else
    {
        printf("Enter %d numbers\n",size);
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &ptr[i]);
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d ", ptr[i]);
        }
    }

    free(ptr);

    return 0;
}