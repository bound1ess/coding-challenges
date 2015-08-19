#include <cstdio>
#include <algorithm>

const int N = 100000;
int arr[N];

inline int max_index(int l, int r) {
  int max = l;

  for (int i = l + 1; i < r; ++i) {
    if (arr[max] < arr[i]) {
      max = i;
    }
  }

  return max;
}

int main() {
  int n, k;
  scanf("%d%d", &n, &k);

  for (int i = 0; i < n; ++i) {
    scanf("%d", arr + i);
  }

  for (int i = 0; i < n; ++i) {
    if (k < 1) {
      break;
    }

    int j = max_index(i, n);

    if (j == i) {
      continue;
    }

    std::swap(arr[i], arr[j]);
    --k;
  }

  for (int i = 0; i < n - 1; ++i) {
    printf("%d ", arr[i]);
  }

  printf("%d\n", arr[n - 1]);
  return 0;
}
