/*
23.WAP to take input in array and remove all duplicates numbers?
input - [ 3,2,3,7,2,9,3,1,2,7 ]
output - [ 3,2,7,9,1 ]
*/
#include <stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter the elements:\n");
  for(int i = 0; i < n;i++){
    scanf("%d",&arr[i]);
  }
}

void DLT_duplicateNum(int n, int arr[]){
 
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  DLT_duplicateNum(n,arr);

  return 0;
}