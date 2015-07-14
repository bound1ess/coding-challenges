#include <cstdio>
#include <cmath>

int main()
{
  int n, left = 0, right = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int val;
      scanf("%d", &val);

      if (i == j) {
        left += val;
      }

      if (j == n - 1 - i) {
        right += val;
      }
    }
  }

  printf("%d\n", (int) std::abs(left - right));
  return 0;
}
