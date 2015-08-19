#include <cstdio>
#include <algorithm>

const int N = 100000;
int a[N];

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }

  std::sort(a, a + n);
  int units = 1, prev = a[0];

  for (int i = 1; i < n; ++i) {
    if (a[i] - prev > 4) {
      prev = a[i];
      ++units;
    }
  }

  printf("%d\n", units);
  return 0;
}
