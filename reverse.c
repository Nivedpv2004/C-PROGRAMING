#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter 5-digit  number: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}