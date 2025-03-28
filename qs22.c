/*
22. Write a program to find the first repeating element in an array?
input:[3,2,4,7,2,9,5,1,2 ]
output: 2 is repeated, count =3
*/
#include <stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter the elements:\n");
  for(int i = 0; i < n;i++){
    scanf("%d",&arr[i]);
  }
}

int repeatedElements(int n, int arr[]){
  int count = 0;
  for(int i = 0; i < n; i++){
    int k = arr[i];
    for(int j = i+1; j < n; j++){
      if(arr[i] == arr[j]){
        count++;
        return arr[i];
      }
    }
  }
  return -1;
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  int result = repeatedElements(n,arr);
 if(result != -1){
  printf("%d element is repeated %d times.",result);
 }
 else {
  printf("There are no repeating elements in the array.\n");
}
  return 0;
}