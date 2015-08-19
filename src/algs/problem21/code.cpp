#include <functional>
#include <algorithm>
#include <cstdio>

using namespace std;

const int N = 100;
int c[N];

int main() {
  int n, k, per = 0, result = 0;
  scanf("%d%d", &n, &k);

  for (int i = 0; i < n; ++i) {
    scanf("%d", c + i);
  }

  sort(c, c + n, greater<int>());

  for (int i = 0; i < n; ++i) {
    result += (per / k + 1) * c[i];
    ++per;
  }

  printf("%d\n", result);
  return 0;
}
