/*
17.WAP to find kth maximum element in array?
input - [6,4,8,9] , k=2.
output - 2nd max element=8
*/
#include<stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter the elements:\n");
  for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }
}

void findMinMax(int n, int arr[]){
  int k;
  printf("Enter the kth maximun: ");
  scanf("%d",&k);
  for(int i = 0; i < n ;i++){
    for(int j =0; j < n-1;j++){
      if(arr[j] < arr[j+1]){
        int swap = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = swap;
      }
    }
  }
  printf("%dth maximum: ",k);
  for(int i = 0; i < n; i++){
    if(k == i){
      printf("%d\n",arr[k-1]);
    }
  }
}

int main(){
int n;
printf("Enter the size of Array: ");
scanf("%d",&n);
int arr[n];
inputsArr(n,arr);
findMinMax(n,arr);



  return 0;
}