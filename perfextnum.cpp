#include <stdio.h>
int main() {
  
  int max = 10000;
  
  bool isPerfect[max + 1];
  for (int i = 0; i <= max; i++) {
    isPerfect[i] = false;
  }
  
  for (int i = 1; i <= max; i++) {

    int sum = 0;
    for (int j = 1; j <= i / 2; j++) {
      if (i % j == 0) {
        sum += j;
      }
    }
    
    if (sum == i) {
      isPerfect[i] = true;
    }
  }
 
  for (int i = 1; i <= max; i++) {
    if (isPerfect[i]) {
      printf("The number %d is a perfect number.\n", i);
    }
  }
  return 0;
}
