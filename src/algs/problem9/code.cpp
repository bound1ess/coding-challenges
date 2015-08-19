#include <iostream>
#include <string>

using namespace std;

const int N = 26;
int freq[N];

int main() {
  string s; cin >> s;
  int odd = 0;

  for (int i = 0, n = s.length(); i < n; ++i) {
    ++freq[s[i] - 'a'];
  }

  for (int i = 0; i < N; ++i) {
    odd += freq[i] % 2;
  }

  cout << (odd <= 1 ? "YES" : "NO") << endl;
  return 0;
}
