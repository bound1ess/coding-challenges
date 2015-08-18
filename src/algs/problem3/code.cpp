#include <cstdio>

int main() {
  int money, cost, extra, cases;
  scanf("%d", &cases);

  for (int i = 0; i < cases; ++i) {
    scanf("%d%d%d", &money, &cost, &extra);
    money /= cost;
    printf("%d\n", money + (money - 1) / (extra - 1));
  }

  return 0;
}
