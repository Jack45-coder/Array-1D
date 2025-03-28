/*
27.Write a program to cyclically rotate an array by one?
Input : { 1, 2, 3, 4, 5 }
Output : { 5, 1, 2, 3, 4 }
*/
#include <stdio.h>
void inputsArr(int n, int arr[])
{
  printf("Enter the Elements:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}

void cyclically_rotate(int n, int arr[]){
  int last = arr[n-1];
  for(int i =  n-1; i > 0; i--){
    arr[i] = arr[i-1];
  }
  arr[0] = last;
}
void printArray(int n, int arr[]){
  for(int i = 0; i < n; i++){
      printf("%d ",arr[i]);
  }
}
int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  cyclically_rotate( n,  arr);
  printArray(n, arr);

  return 0;
}
