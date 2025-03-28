/*
28.Write a program to rotate an array by d elements?
Input : { 1, 2, 3, 4, 5, 6, 7 }, d = 2
Output : {3,4,5,6,7,1,2}
*/
#include <stdio.h>
void inputsArr(int n, int arr[])
{
  printf("Enter the elements:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void rotate_Arr(int n, int arr[], int d)
{
  // Store first d elements in temp array
  int temp[d];
  for (int i = 0; i < d; i++)
  {
    temp[i] = arr[i];
  }
  // Shift remaining elements
  for (int i = 0; i < n - d; i++)
  {
    arr[i] = arr[i + d];
  }
  // Copy temp elements to the end
  for (int i = 0; i < d; i++)
  {
    arr[n - d + i] = temp[i];
  }
}
void printArr(int n, int arr[])
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  int d;
  printf("Enter the rotation elements: ");
  scanf("%d", &d);
  rotate_Arr(n, arr, d);
  printArr(n, arr);

  return 0;
}