#include <iostream>

const int MOD = 1e9 + 7;
using ll = long long;

// Time Complexity: O(log2(exp))
// Much faster compared to the traditional
// method of manual multiplication. O(exp)

ll binpow(ll base, ll exp) {
  ll result = 1;
  base %= MOD;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % MOD;
    base = (base * base) % MOD;
    exp >>= 1;
  }
  return result;
}

int main() {
  int a = 5, b = 5;
  std::cout << binpow(a, b);
}
