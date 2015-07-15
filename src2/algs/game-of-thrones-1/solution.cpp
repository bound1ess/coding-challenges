#include <string>
#include <iostream>

using namespace std;

const int ALPHA = 26;

int chars[ALPHA];

int main() {
  string str;
  cin >> str;

  for (auto it = str.begin(); it != str.end(); ++it) {
    ++chars[*it - 'a'];
  }

  int odd = 0;

  for (int i = 0; i < ALPHA; ++i) {
    odd += chars[i] % 2;
  }

  cout << (odd < 2 ? "YES" : "NO") << endl;
  return 0;
}
