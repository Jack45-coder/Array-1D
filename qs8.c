/*
8. WAP to merge two arrays in single array?
input
arr1 [2,5,3,8]
arr2 [1,6,4,9]
output
arr3[2,5,3,8,1,6,4,9]
*/
#include <stdio.h>
void inputsArr(int n, int arr[])
{
  printf("Enter the  elements\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}

int main()
{
  int n, n2;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);

  printf("Enter the size of 2nd array: ");
  scanf("%d", &n2);
  int arr2[n2];
  inputsArr(n2, arr2);

  int merged[n + n2];

  for (int i = 0; i < n; i++)
  {
    merged[i] = arr[i];
  }

  for (int j = 0; j < n2; j++)
  {
    merged[n + j] = arr2[j];
  }
  printf("MErged Array:\n");
  for (int k = 0; k < n + n2; k++)
  {
    printf("%d  ", merged[k]);
  }

  return 0;
}