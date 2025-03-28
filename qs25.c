/*
25.WAP to take an array n size and take  A number from user and check number
that number is present or not present in the array?
[ 4,21,76,1,9] •k= 76 - 76 is present.
[8,32,54,65] •k=25 - 25 is not present
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

void CheckElements(int n, int arr[])
{
  int elements;
  int found = 0;
  printf("Enter the elements: ");
  scanf("%d", &elements);
  for (int i = 0; i < n; i++)
  {
    if (elements == arr[i])
    {
      printf("%d is present.", elements);
      found = 1;
      break;
    }
  }
  if (!found)
  {
    printf("%d is not present!", elements);
  }
}

int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  CheckElements(n, arr);

  return 0;
}
