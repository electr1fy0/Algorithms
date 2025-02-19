// Binary Search Implementations in C

#include <stdio.h>

// binary search
int binarySearch1(int arr[], int target, int start, int end) {
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
      return mid;
    else if (arr[mid] < target)
      start = mid + 1;
    else
      end = mid - 1;
  }
  return -1;
}

// binary search (recursion)
int binarySearch2(int arr[], int target, int start, int end) {
  if (start > end)
    return -1;

  int mid = start + (end - start) / 2;

  if (arr[mid] == target)
    return mid;
  if (arr[mid] > target)
    return binarySearch2(arr, target, start, mid - 1);
  if (arr[mid] < target)
    return binarySearch2(arr, target, mid + 1, end);

  return -1;
}

int main() {
  int z[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(z) / sizeof(z[0]);
  int x = 6;

  printf("Index of %d %d\n", x, binarySearch1(z, x, 0, size));

  for (int i = 0; i < size; ++i) // printing the sorted array
    printf("%d ", z[i]);
}
