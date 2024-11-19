#include <cstdint>
#include <iostream>
using namespace std;

#define MOD(a, b) (b + (a % b)) % b

// NOTE: it's better to use a function, to avoid bugs
// https://codeforces.com/blog/entry/100941
int64_t mod(int64_t a, int64_t b) { return (b + (a % b)) % b; }

int main() {
  cout << mod(-1, 5) << " " << MOD(-1, 5) << '\n';
  return 0;
}