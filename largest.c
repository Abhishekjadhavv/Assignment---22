// Write a program in C to find the largest element using Dynamic Memory Allocation.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int l,largest = 0;
    printf("How many elements you want?\n");
    scanf("%d", &l);
    int *ptr = (int *)malloc(l * sizeof(int));
    printf("Enter %d numbers",l);
    for (int i = 0; i < l; i++)
    {
        scanf("%d", ptr+i);
        if(largest<ptr[i]){
           largest = ptr[i];
        }
    }

    free(ptr);
    printf("largest number %d", largest);
    return 0;
}
