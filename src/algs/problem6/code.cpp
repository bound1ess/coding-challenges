#include <iostream>
#include <string>

using namespace std;

inline bool is_palindrome(const string &s) {
  int i = 0, j = s.length() - 1u;

  while (i < j) {
    if (s[i] != s[j]) {
      return false;
    }

    ++i, --j;
  }

  return true;
}

int main() {
  int cases;
  string s;
  cin >> cases;

  for (int i = 0; i < cases; ++i) {
    cin >> s;

    if (is_palindrome(s)) {
      cout << -1 << endl;
      continue;
    }

    int l = 0, r = s.length() - 1u;

    while (l < r && s[l] == s[r]) {
      ++l, --r;
    }

    if (l >= r) {
      cout << -1 << endl;
      continue;
    }

    if (is_palindrome(s.substr(0, l) + s.substr(l + 1))) {
      cout << l << endl;
    } else {
      cout << r << endl;
    }
  }

  return 0;
}
