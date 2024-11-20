#include <iostream>
using namespace std;

/*
References:
- https://oi-wiki.org/math/number-theory/powerful-number/
- https://github.com/ShahjalalShohag/code-library/blob/main/Number%20Theory/Powerful%20Number%20Sieve.cpp
- https://usaco.guide/gold/modular#modular-exponentiation
- https://youtu.be/L-Wzglnm4dM
*/

typedef long long ll;
#define M ((ll)((1e9) + 7))

ll power(ll &a, ll &b) {
  ll result = 1;
  while (b > 0) {
    if (b % 2 == 1) {
      result = (result * a) % M;
    }
    a = (a * a) % M;
    b /= 2;
  }
  return result;
}

int main() {
  ll a, b;
  cin >> a >> b;
  cout << power(a, b) << '\n';
  return 0;
}

/*
practice problems:
- https://cses.fi/problemset/task/1095
*/