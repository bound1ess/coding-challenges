#include <cstdio>

int main() {
  int t, n;
  scanf("%d", &t);

  for (int i = 0; i < t; ++i) {
    scanf("%d", &n);

    printf("%d\n", n * (n - 1) / 2);
  }

  return 0;
}
