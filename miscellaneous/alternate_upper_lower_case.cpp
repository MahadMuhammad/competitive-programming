#include <iostream>
#include <string>
using namespace std;

// alternate between upper and lower case
// XOR with 32
// learn more here: https://codeforces.com/blog/entry/99055
int main() {
  while (true) {
    string S;
    cin >> S;
    for (auto &c : S) {
      c ^= 32;
      // c ^= ' ';
      cout << c;
    }
    cout << '\n';
  }
  return 0;
}