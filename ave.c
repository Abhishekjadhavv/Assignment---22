// Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.


#include<stdio.h>
#include<stdlib.h>

void avg(int l){
  int sum = 0,a;  
  int *arr = (int *) malloc(l*sizeof(int));
  printf("Enter  %d numbers in an array\n",l);
  for(int i= 0;i<l;i++){
    scanf("%d",arr+i);
    sum+= arr[i];
  }
  
  a = sum/l;
  printf("average is %d",a);
  return;
}

int main(){
    int l;
    printf("How many numbers you want please enter?\n");
    scanf("%d", &l);
    avg(l);
    return 0;
}