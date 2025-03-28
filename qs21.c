/*
21.WAP in c to separate odd and even integers into separate arrays.
i/p =[2,5,11,6,44,31]
o/p =
The Even elements are :
[2,6,44]
The Odd elements are :
[5,11,31]
*/
#include <stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter the elements:\n");
  for(int i = 0; i < n;i++){
    scanf("%d",&arr[i]);
  }
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  printf("Even num:\n");
  for(int i = 0; i < n;i++){
    if(arr[i] % 2 == 0){
      printf("%d ",arr[i]);
    }
  }
  printf("\n");
  printf("Odd num:\n");
  for(int i = 0; i < n;i++){
    if(arr[i] % 2 != 0){
      printf("%d ",arr[i]);
    }
  }

  return 0;
}