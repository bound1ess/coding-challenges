#include <algorithm>
#include <functional>
#include <cstdio>

const int N = 1000;
int a[N], b[N];

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; ++i) {
    int n, k;
    scanf("%d%d", &n, &k);

    for (int j = 0; j < n; ++j) {
      scanf("%d", a + j);
    }

    for (int j = 0; j < n; ++j) {
      scanf("%d", b + j);
    }

    std::sort(a, a + n);
    std::sort(b, b + n, std::greater<int>());
    bool ok = true;

    for (int j = 0; j < n; ++j) {
      if (a[j] + b[j] < k) {
        ok = false;
        break;
      }
    }

    printf(ok ? "YES\n" : "NO\n");
  }

  return 0;
}
