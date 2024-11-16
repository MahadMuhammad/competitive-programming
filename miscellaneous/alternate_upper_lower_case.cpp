#include <iostream>
#include <string>
using namespace std;

// alternate between upper and lower case
// XOR with 32
int main() {
  while (true) {
    string S;
    cin >> S;
    for (auto &c : S) {
      c ^= 32;
      cout << c;
    }
    cout << '\n';
  }
  return 0;
}