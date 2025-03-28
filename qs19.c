/*
19.WAP to take input in array and delete  kth element in array?
input - [3,4,8,2] •k=2.
 output [ 3,8,2 ]
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
void DLTelement(int n, int arr[])
{
  int k;
  printf("Enter the kth num: ");
  scanf("%d", &k);

  if (k < 1 || k > n)
  {
    printf("Invalid position! Please enter a value between 1 and %d.\n", n);
    return;
  }
  printf("Array after deleting the %dth element:\n", k);
  for (int i = 0; i < n; i++)
  {
    if (i == (k-1))
    {
      continue;
    }
    printf("%d ", arr[i]);
  }
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  DLTelement(n, arr);
  return 0;
}