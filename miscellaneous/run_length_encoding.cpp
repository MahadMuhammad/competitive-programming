#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

template <typename T, typename T_iterable>
vector<pair<T, int>> run_length_encoding(const T_iterable &items) {
  vector<pair<T, int>> runs;

  // TODO: This maybe unavailable for some data structures
  // Remove this line, if that data structures doesn't have .size() function
  runs.reserve(items.size());

  T previous = T();
  int count = 0;

  for (const T &item : items) {
    if (item == previous) {
      count++;
    } else {
      if (count > 0)
        runs.emplace_back(previous, count);

      previous = item;
      count = 1;
    }
  }
  if (count > 0) {
    runs.emplace_back(previous, count);
  }

  runs.shrink_to_fit();
  return std::move(runs);
}

int main() {
  string S("ABBCCCDDDD");
  vector<pair<char, int>> runs = run_length_encoding<char>(S);

  for (auto &x : runs) {
    cout << x.first << " " << x.second << '\n';
  }
  return 0;
}