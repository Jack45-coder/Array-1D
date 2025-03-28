/*
12.WAP to find 2nd maximum element in array?
input - [3,5,1,9]
output- max=5
*/
#include<stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter the elemens:\n");
  for(int i =0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
}
void find2ndMaximum(int n, int arr[]){
  for(int i = 0 ; i < n; i++){
    for(int j = 0; j < n-1; j++){
      if(arr[j] > arr[j+1]){
        int swap = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = swap;
      }
    }
  }

    printf("2nd maximum array of the element is: %d\n",arr[n-2]);
    printf("2nd minimum array of the element is: %d",arr[n-4]);
}
int main(){
int n;
printf("Enter the size of array: ");
scanf("%d",&n);
int arr[n];
inputsArr(n,arr);
find2ndMaximum(n,arr);




  return 0;
}