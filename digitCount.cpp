#include <cmath>
#include <iostream>

// Time Complexity: O(1)

int digitCount(int n) { return log10(n) + 1; }

int main() {
  int n = 1313242;
  std::cout << digitCount(n); // prints 7
}
