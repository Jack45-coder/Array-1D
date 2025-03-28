/*
29.Write a program to find the missing number in an array of consecutive
numbers
Input : { 1, 2, 3, 5, 6, 7, 8 }
Output: The missing number is 4.
*/
#include<stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter the %d elements of the sequence:\n", n-1);
  for(int i = 0; i < n-1; i++){
    scanf("%d",&arr[i]);
  }
}

int FindMissingNum(int n, int arr[]){
  int total_Sum = ( n*(n+1)/2);
  int actual_Sum = 0;
  for(int i = 0; i < n -1; i++){
    actual_Sum += arr[i];
  }
  return total_Sum - actual_Sum;
}

int main(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  int  missing = FindMissingNum(n,arr);
  printf("The missing number is %d",missing);


return 0;
}