#include <cstdio>

const int N = 100;
int a[N];

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    int val;
    scanf("%d", &val);
    ++a[val];
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < a[i]; ++j) {
      printf("%d ", i);
    }
  }

  printf("\n");
  return 0;
}
