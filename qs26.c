/*
26.WAP in c to find a pair with given sum in the array?
input
[6,8,4,-5,7,9],k=15
output
Value of 0 or 5 index sum is equals to 15.
Value of 1 or 4 index sum is equals to 15.
input
[2,8,4,-5,3,1],k=3
output
Value of 0 or 5 index sum is equals to 3.
Value of 1 or 3 index sum is equal to 3.
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

void sum_pair(int n, int arr[])
{
  int target;
  printf("Enter the target of sum: ");
  scanf("%d",&target);
  for(int i = 0; i < n; i++){
    for( int j = i+1; j < n; j++){
       if(arr[i] + arr[j] == target){
        printf("Value of %d or %d index sum is eqal to %d\n",i,j,target);
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
  sum_pair(n,arr);

  return 0;
}
