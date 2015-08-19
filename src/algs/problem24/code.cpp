#include <cstdio>

const int N = 100000;
int arr[N];

inline int max(int x, int y) {
  return x < y ? y : x;
}

inline int max_sum(int n) {
  int max_all = arr[0], max_curr = arr[0];

  for (int i = 1; i < n; ++i) {
    max_all = max(arr[i], arr[i] + max_all);
    max_curr = max(max_curr, max_all);
  }

  return max_curr;
}

inline int max_nonconsec_sum(int n) {
  int pos = 0, sum = 0, neg = -1e9;

  for (int i = 0; i < n; ++i) {
    if (arr[i] >= 0) {
      sum += arr[i];
    } else {
      ++pos;

      if (arr[i] > neg) {
        neg = arr[i];
      }
    }
  }

  return pos == n ? neg : sum;
}

int main() {
  int t, n;
  scanf("%d", &t);

  for (int i = 0; i < t; ++i) {
    scanf("%d", &n);

    for (int j = 0; j < n; ++j) {
      scanf("%d", arr + j);
    }

    printf("%d %d\n", max_sum(n), max_nonconsec_sum(n));
  }

  return 0;
}
