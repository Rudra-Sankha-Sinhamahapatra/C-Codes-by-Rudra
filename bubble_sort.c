#include <stdio.h>

int main() {
  int n, i, j, temp;
  
  printf("Enter the number of elements to be sorted: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter %d elements:\n", n);
  
  // Input the array
  for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  // Bubble sort algorithm
  for(i = 0; i < n-1; i++) {
    for(j = 0; j < n-i-1; j++) {
      if(arr[j] > arr[j+1]) {
        // Swap elements
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  
  printf("Sorted elements in ascending order:\n");
  
  // Output the sorted array
  for(i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}
