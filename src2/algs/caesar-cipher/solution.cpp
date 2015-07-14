#include <iostream>
#include <string>

using namespace std;

inline bool is_down(char chr) {
  return chr >= 'a' && chr <= 'z';
}

inline bool is_up(char chr) {
  return chr >= 'A' && chr <= 'Z';
}

inline bool is_alpha(char chr) {
  return is_down(chr) || is_up(chr);
}

inline char first(char chr) {
  return is_up(chr) ? 'A' : 'a';
}

inline char last(char chr) {
  return is_up(chr) ? 'Z' : 'z';
}

inline char rotate(char chr, int k) {
  if ( ! is_alpha(chr)) {
    return chr;
  }

  while (chr < last(chr) && k > 0) {
    ++chr;
    --k;
  }

  if (k > 0) {
    chr = first(chr);

    while (k > 1) {
      ++chr;
      --k;
    }
  }

  return chr;
}

int main() {
  string str;
  int n, k;
  cin >> n >> str >> k;

  for (int i = 0; i < n; ++i) {
    str[i] = rotate(str[i], k % 26);
  }

  cout << str << endl;
  return 0;
}
