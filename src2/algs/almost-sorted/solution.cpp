#include <cstdio>

const int N = 100000;
int a[N], b[N], aux[N];

void sort(int l, int r);
void reverse(int l, int r);

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
    b[i] = a[i];
  }

  sort(0, n - 1);

  int l, r;
  l = r = -1;

  bool can_swap = true;

  for (int i = 0; i < n; ++i) {
    if (a[i] == b[i]) {
      continue;
    }

    if (l < 0) {
      l = i;
    } else if (r < 0) {
      r = i;
    } else {
      can_swap = false;
      break;
    }
  }

  if (l < 0) {
    printf("yes\n");
    return 0;
  }

  if (can_swap && r != -1 && a[l] == b[r] && a[r] == b[l]) {
    printf("yes\nswap %d %d\n", l + 1, r + 1);
    return 0;
  }

  bool can_reverse = true, reversed = false;
  int i = 0;

  while (i < n - 1) {
    if (a[i] < a[i + 1]) {
      ++i;
      continue;
    }

    if (reversed) {
      can_reverse = false;
      break;
    }

    int j = i;

    while (j < n - 1 && a[j + 1] < a[j]) {
      ++j;
    }

    l = i, r = j;
    reversed = true;

    reverse(l, r);
  }

  if (can_reverse) {
    printf("yes\nreverse %d %d\n", l + 1, r + 1);
  } else {
    printf("no\n");
  }

  return 0;
}

void sort(int l, int r) {
  if (l == r) {
    return;
  }

  int m = (l + r) >> 1;

  sort(l, m);
  sort(m + 1, r);

  int i = l, j = m + 1, k = 0;

  while (i <= m && j <= r) {
    if (b[i] < b[j]) {
      aux[k] = b[i];
      ++i;
    } else {
      aux[k] = b[j];
      ++j;
    }

    ++k;
  }

  for (int d = i; d <= m; ++d) {
    aux[k] = b[d];
    ++k;
  }

  for (int d = j; d <= r; ++d) {
    aux[k] = b[d];
    ++k;
  }

  for (int d = 0; d < k; ++d) {
    b[l + d] = aux[d];
  }
}

void reverse(int l, int r) {
  while (l < r) {
    int tmp = a[l];

    a[l] = a[r];
    a[r] = tmp;

    ++l, --r;
  }
}
