#include <stdio.h>
#include <math.h>
int main() {
  int max = 100;
 
  bool isPrime[max + 1];
  for (int i = 0; i <= max; i++) {
    isPrime[i] = true;
  }
 
  for (int i = 2; i <= sqrt(max); i++) {
    if (isPrime[i]) {
      
      for (int j = i * i; j <= max; j += i) {
        isPrime[j] = false;
      }
    }
  }
 
  for (int i = 2; i <= max; i++) {
    if (isPrime[i]) {
      printf("%d ", i);
    }
  }
  return 0;
}
