#include <iostream>
#include <vector>
using namespace std;

/*
Relevant Problem: https://codeforces.com/contest/2033/problem/B

Sample Input:
5
1 1 -1 -1 3
-3 1 4 4 -4
-1 -1 3 0 -5
4 5 3 -3 -1
3 1 -3 -1 5

- the diagonal below the main diagonal has a difference of -1
- the main diagonal has a difference of 0
- the diagonal above the main diagonal has a difference of +1

This approach is not very efficient, but it's a relatively inituitive way to get
the diagonal elements.
*/
int main() {
  int N;
  cin >> N;
  vector A(N, vector<int>(N));

  for (auto &row : A) {
    for (auto &a : row) {
      cin >> a;
    }
  }

  { // 1st Approch
#define valid(start, num, end) (((start) <= (num)) && ((num) < (end)))
    for (int g = -(N - 1); g < N; g++) {
      for (int i = 0, j = g; j < N; i++, j++) {
        if (valid(0, i, N) && valid(0, j, N))
          cout << A[i][j] << ' ';
      }
      cout << '\n';
    }
  }

  { /*
      2nd Approch - Learned from nealwu
       https://codeforces.com/contest/2033/submission/287682745
    */
    for (int diff = -(N - 1); diff <= N - 1; diff++) {
      for (int r = 0; r < N; r++) {
        int c = r + diff;
        if (0 <= c && c < N)
          cout << A[r][c] << ' ';
      }
      cout << '\n';
    }
  }

  return 0;
}