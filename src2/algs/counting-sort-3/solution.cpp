#include <cstdio>

const int N = 100;

int a[N];
char tmp[N];

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    int num;
    scanf("%d %s", &num, tmp);
    ++a[num];
  }

  int prev = 0;

  for (int i = 0; i < N; ++i) {
    prev += a[i];
    printf("%d", prev);
    printf(i + 1 < N ? " " : "\n");
  }

  return 0;
}
