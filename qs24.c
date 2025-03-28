/*
24.WAP to take input in array and print all duplicates numbers and its count?
I nput [ 3,2,3,7,2,9,3,1,2,7 ]
Output -
-3 duplicate.
Count=3.
- 2 duplicate.
Count=3.
- 7 duplicate.
Count=2.
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

void arangeUniqueElements(int n, int arr[], int temp[])
{
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      temp[j] = arr[0];
      if(temp[j] != arr[i+1]){
          temp[j] = arr[i+1];
          arr[i+1] = temp[j];
      }
    }
  }
  for(int i = 0; i < n; i++){
    printf("%d ",arr[i]);
  }
}
int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  int temp[n];
  arangeUniqueElements(n, arr,temp);
  return 0;
}