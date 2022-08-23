// Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, sum = 0;
    printf("How many elements you want?\n");
    scanf("%d", &l);
    int *ptr = (int *)malloc(l * sizeof(int));
    printf("Enter %d numbers",l);
    for (int i = 0; i < l; i++)
    {
        scanf("%d", ptr+i);
        sum += ptr[i];
    }
    free(ptr);
    printf("Sum of all elements is %d", sum);
    return 0;
}