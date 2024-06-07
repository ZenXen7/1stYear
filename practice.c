#include <stdio.h>

int main() {
  int n, sum = 0;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    if (i % 2 == 0) {
      sum += arr[i];
    }
  }

  printf("The sum is: %d", sum);

  return 0;
}
