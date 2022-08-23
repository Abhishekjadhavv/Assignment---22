// 10. Find out the maximum and minimum from an array using dynamic memory allocation
// in C.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, max = 0, min;
    printf("How many numbers you want?\n");
    scanf("%d", &l);
    int *ptr = (int *)malloc(l * sizeof(int));
    printf("Enter %d numbers in the array\n", l);

    if (ptr == NULL)
        return 0;

    for (int i = 0; i < l; i++)
        scanf("%d", ptr + i);

    min = ptr[0];

    for (int i = 0; i < l; i++)
    {
        if (ptr[i] > max)
            max = ptr[i];

        if (min > ptr[i])
            min = ptr[i];
    }
   
    printf("maximum number in array is %d\n",max);
    printf("minimum number in array is %d\n",min);
    return 0;
}