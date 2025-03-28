/*
14.WAP to find kth element in array?
input - [4,8,6,9] •k=2.
output - Kth element=8
*/
#include<stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter the elemens:\n");
  for(int i =0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
}
void findElement(int n, int arr[]){
  int index;
  printf("Enter the index: ");
  scanf("%d",&index);
  for(int i = 0; i < n; i++){
    if(i == index){
      printf("%d",arr[i]);
    }
  }
}
int main(){
int n;
printf("Enter the size of array: ");
scanf("%d",&n);
int arr[n];
inputsArr(n,arr);
findElement(n,arr);

  return 0;
}