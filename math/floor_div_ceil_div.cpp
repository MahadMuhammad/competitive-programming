#include <iostream>
using namespace std;

/* For further information, see this blog:
 * https://codeforces.com/blog/entry/109514
 */
inline int64_t floor_div(int64_t a, int64_t b) {
  return a / b - ((a ^ b) < 0 && a % b != 0);
}

inline int64_t ceil_div(int64_t a, int64_t b) {
  return a / b + ((a ^ b) > 0 && a % b != 0);
}

int main() {
  int64_t a, b;
  while (cin >> a >> b) {
    cout << "Floor Division: " << floor_div(a, b) << "\nCeil Division "
         << int64_t(ceil_div(a, b)) << '\n';
  }
}