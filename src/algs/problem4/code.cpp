#include <cstdio>
#include <algorithm>

const int N = 1234567;
int a[N];

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }

  std::sort(a, a + n);

  if (n % 2 == 1) {
    printf("%d\n", a[n / 2]);
  } else {
    printf("%d\n", (a[n / 2] - a[n / 2 - 1]) / 2);
  }

  return 0;
}
