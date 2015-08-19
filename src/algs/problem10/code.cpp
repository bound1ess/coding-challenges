#include <iostream>
#include <string>

using namespace std;

const int N = 26;
int global[N], local[N];

int main() {
  string s;
  int n, ans = 0;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> s;

    for (int j = 0; j < N; ++j) {
      local[j] = 0;
    }

    for (int j = 0, n = s.length(); j < n; ++j) {
      ++local[s[j] - 'a'];
    }

    for (int j = 0; j < N; ++j) {
      if (local[j] > 0) {
        ++global[j];
      }
    }
  }

  for (int i = 0; i < N; ++i) {
    if (global[i] == n) {
      ++ans;
    }
  }

  cout << ans << endl;
  return 0;
}
