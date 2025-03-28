/*
30.Write a program to find the union and intersection of two sorted arrays?
Input : Array1 = { 1, 2, 4, 5, 6 }, Array2 = { 2, 3, 5, 7 }
Output : Union = { 1, 2, 3, 4, 5, 6, 7 }, Intersection = { 2, 5 }
*/

#include <stdio.h>
void inputs(int n, int arr[])
{
  printf("Enter the elements:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}

int main()
{
  int n, n2;
  printf("Enter the size of Array: ");
  scanf("%d", &n);

  int arr[n];
  inputs(n, arr);

  printf("Enter the size of 2nd Array: ");
  scanf("%d", &n2);
  int arr2[n2];
  inputs(n2, arr2);

    return 0;
}