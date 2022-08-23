// Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, sum = 0;
    printf("How many numbers you want?\n");
    scanf("%d", &l);
    int *ptr = (int *)malloc(l * sizeof(int));
    printf("Enter %d numbers in the array\n",l);
    for (int i = 0; i < l; i++)
    {
        scanf("%d", ptr + i);
        sum += ptr[i];
    }
    free(ptr);
    printf("\nSum of numbers is %d", sum);
    return 0;
}