#include <algorithm>
#include <iostream>

using namespace std;

const int N = 100000;
int arr[N];

int main() {
  int t, n;
  cin >> t;

  for (int i = 0; i < t; ++i) {
    cin >> n;

    for (int j = 0; j < n; ++j) {
      cin >> arr[j];
    }

    sort(arr, arr + n);
    long long sum = 0LL;

    for (int j = 0; j < n;) {
      int k = j + 1;

      while (k < n && arr[k] == arr[k - 1]) {
        ++k;
      }

      sum += static_cast<long long>(k - j) * (k - j - 1);
      j = k;
    }

    cout << sum << endl;
  }

  return 0;
}
