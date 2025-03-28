/*
11.WAP to take input from user in array and the element is only 0 or 1 or other
number is invalid?
input
Size=4
1
0
3 invalid
1
6 invalid
1
*/
#include <stdio.h>
void inputsArr(int n, int arr[])
{
  printf("Enter the elements only 0 or 1:\n");
  for (int i = 0; i < n; i++)
  {
    int temp;
    while (1)
    {
      scanf("%d", &temp);
      if (temp == 0 || temp == 1)
      {
        arr[i] = temp;
        break;
      }
      else
      {
        printf("%d invalid! Enter only 0 or 1: ", temp);
      }
    }
  }
}

int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  printf("Valid Array:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}