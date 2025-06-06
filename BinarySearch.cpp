#include <iostream>

// Time Complexity: O(log N)
// Space Complexity:
// 1. Iterative: O(1)
// 2. Recursive: O(log N);

// Iterative method
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

// Recursive method
int binarySearch2(int arr[], int target, int start, int end) {
  if (start > end) return -1;

  int mid = start + (end - start) / 2;

  if (arr[mid] == target) return mid;
  if (arr[mid] > target) return binarySearch2(arr, target, start, mid - 1);
  if (arr[mid] < target) return binarySearch2(arr, target, mid + 1, end);

  return -1;
}

int main() {
  int z[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(z) / sizeof(z[0]);
  int x = 6;
  std::cout << binarySearch1(z, x, 0, size);
}
