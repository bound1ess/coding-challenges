#include <cstdio>

const int N = 100;
int numbers[N];

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    int number;
    scanf("%d", &number);
    ++numbers[number];
  }

  for (int i = 0; i < N; ++i) {
    printf("%d", numbers[i]);
    printf(i + 1 < N ? " " : "\n");
  }

  return 0;
}
