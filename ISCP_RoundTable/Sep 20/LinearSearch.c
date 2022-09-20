#include <stdio.h>

int linearSearch(int *a, int n, int key) {
  int i;
  for (i = 0; i < n; i++) {
    if (*(a + i) == key) {
      return i;
    }
  }
  return -1;
}
int main() {
  int n, i;
  printf("Enter n value: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter elements into array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int key;
  printf("Enter key for searching: \n");
  scanf("%d", &key);
  int res;
  res = linearSearch(a, n, key);
  if (res == -1) {
    printf("Element not found");
  } else {
    printf("%d is present in %d index of the given array", key, res);
  }
  return 0;
}
