#include <cstdio>
#include <algorithm>

const int N = 100000;
int a[N];

int main() {
  int n, k, ans = 0;
  scanf("%d%d", &n, &k);

  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }

  std::sort(a, a + n);

  for (int i = 1; i < n; ++i) {
    a[i] += a[i - 1];

    if (a[i] > k) {
      ans = i;
      break;
    }
  }

  printf("%d\n", ans);
  return 0;
}
