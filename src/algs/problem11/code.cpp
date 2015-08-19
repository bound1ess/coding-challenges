#include <algorithm>
#include <utility>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
  int n, time, units;
  vector< pair<int, int> > orders;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d%d", &time, &units);
    orders.push_back(make_pair(time + units, i + 1));
  }

  sort(orders.begin(), orders.end());

  for (pair<int, int> &order: orders) {
    printf("%d ", order.second);
  }

  printf("\n");
  return 0;
}
