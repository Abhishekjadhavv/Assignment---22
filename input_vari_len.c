// 1. Define a function to input variable length string and store it in an array without
// memory wastage.

#include <stdio.h>
#include <stdlib.h>

char *input_string(int l)
{
    char *ptr = (char *)malloc((l+1) * sizeof(char));
    printf("Input string\n");
    scanf("%s", ptr);
    return ptr;
}

int main()
{
    int l;
    char *ptr;
    printf("How many characters in the string?\n");
    scanf("%d", &l);
    ptr = input_string(l);
    printf("%s", ptr);
    free(ptr);
    return 0;
}