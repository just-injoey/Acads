#include <stdio.h>

int binarySearch(int *a, int n, int key) {
  int l = 0, h = n - 1, m;
  while (l <= h) {
    m = (l + h) / 2;
    if (a[m] == key) { //*(a+m) = a[m]
      return m;
    } else if (a[m] < key) {
      l = m + 1;
    } else {
      h = m - 1;
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
  res = binarySearch(a, n, key);
  if (res == -1) {
    printf("Element not found");
  } else {
    printf("%d is present in %d index of the given array", key, res);
  }
  return 0;
}
