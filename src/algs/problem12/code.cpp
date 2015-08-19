#include <cstdio>

const int N = 100000;
int a[N];

inline bool solve(int n);

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; ++i) {
    int n;
    scanf("%d", &n);

    for (int j = 0; j < n; ++j) {
      scanf("%d", a + j);
    }

    printf(solve(n) ? "YES\n" : "NO\n");
  }

  return 0;
}

inline bool solve(int n) {
  if (n == 1) {
    return true;
  }

  if (n == 2) {
    return false;
  }

  for (int i = 1; i < n; ++i) {
    a[i] += a[i - 1];
  }

  for (int i = 1; i < n - 1; ++i) {
    if (a[i - 1] == a[n - 1] - a[i]) {
      return true;
    }
  }

  return false;
}
