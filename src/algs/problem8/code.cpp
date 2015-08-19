#include <cstdio>
#include <algorithm>

const int N = 100;
char grid[N][N];

int main() {
  int cases;
  scanf("%d", &cases);

  for (int i = 0; i < cases; ++i) {
    int n;
    scanf("%d", &n);

    for (int j = 0; j < n; ++j) {
      scanf("%s", grid[j]);
      std::sort(grid[j], grid[j] + n);
    }

    bool ok = true;

    for (int j = 1; j < n; ++j) {
      for (int k = 0; k < n; ++k) {
        if (grid[j - 1][k] > grid[j][k]) {
          ok = false;
          break;
        }
      }

      if ( ! ok) {
        break;
      }
    }

    printf(ok ? "YES\n" : "NO\n");
  }

  return 0;
}
