#include <iostream>
#include <string>

using namespace std;

int main() {
  int cases, ans;
  string s;
  cin >> cases;

  for (int i = 0; i < cases; ++i) {
    cin >> s;
    ans = 0;

    for (int j = 0, n = s.length(); j < n - 1; ++j) {
      if (s[j] == s[j + 1]) {
        ++ans;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
