#include <stdio.h>
int main() {
 
  int arr[] = {10, 20, 30, 40, 50};

  int n = sizeof(arr) / sizeof(arr[0]);
 
  int x;
  printf("Enter the element to be searched: ");
  scanf(" %d ", &x);
 
  int i = 0;
 
  while (i < n) {
    
    if (arr[i] == x) {
      break;
    }
   
    i++;
  }
  
  if (i < n) {
    printf("The element is found at index %d.\n", i);
  } else {
   
    printf("The element is not found.\n");
  }
  return 0;
}
