/*
28.Write a program to rotate an array by d elements?
Input : { 1, 2, 3, 4, 5, 6, 7 }, d = 2
Output : {6,7,1,2, 3, 4, 5 }
*/
#include<stdio.h>
void inputsArr(int n, int arr[]){
  printf("Enter the elements:\n");
  for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }
}

void rotate_Arr(int n, int arr[], int d){
  int temp[d];
  // copy last d elements
  for (int i = 0; i < d; i++)
  {
    temp[i] = arr[n-d+i];
  }
  // Shift remaning elements d space:
  for(int i = n-1; i >= d; i--){
    arr[i] = arr[i-d];
  }
  // Copy temp elements to the end
  for(int i = 0; i < d; i++){
    arr[i] = temp[i];
  }
}

// Function to print the array
void printArr(int n, int arr[]) {
  for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
  }
  printf("\n");
}


int main(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);
  int d;
  printf("Enter the rotation elements: ");
  scanf("%d", &d);
  rotate_Arr(n, arr, d);
  printArr(n, arr);

  return 0;
}