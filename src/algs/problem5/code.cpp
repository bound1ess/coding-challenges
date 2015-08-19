#include <iostream>
#include <string>

using namespace std;

const int N = 26;
int freq[N];

int main() {
  string s;
  int cases;
  cin >> cases;

  for (int i = 0; i < cases; ++i) {
    cin >> s;
    int sum = 0, n = s.length(), m = s.length() / 2u;

    if (n % 2 != 0) {
      cout << -1 << endl;
      continue;
    }

    for (int j = 0; j < N; ++j) {
      freq[j] = 0;
    }

    for (int j = 0; j < m; ++j) {
      ++freq[s[j] - 'a'];
    }

    for (int j = 0; j < (n - m); ++j) {
      --freq[s[m + j] - 'a'];
    }

    for (int j = 0; j < N; ++j) {
      if (freq[j] >= 0) {
        sum += freq[j];
      } else {
        sum += -freq[j];
      }
    }

    cout << (sum / 2) << endl;
  }

  return 0;
}
