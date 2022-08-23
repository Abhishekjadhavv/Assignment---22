// Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int l;
    printf("How many characters in the string?\n");
    scanf("%d", &l);
    char *str = (char*) malloc((l+1)*sizeof(char));
    printf("Enter text");
    scanf("%s",str);
    printf("%s",str);
    return 0;
}