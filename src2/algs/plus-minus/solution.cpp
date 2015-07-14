#include <cstdio>

int main() {
  int n;
  int neg = 0, zero = 0, pos = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    int val;
    scanf("%d", &val);

    if (val == 0) {
      ++zero;
    } else if (val > 0) {
      ++pos;
    } else {
      ++neg;
    }
  }

  printf("%.3f\n", (double) pos / n);
  printf("%.3f\n", (double) neg / n);
  printf("%.3f\n", (double) zero / n);
  return 0;
}
