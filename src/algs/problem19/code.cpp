#include <iostream>
#include <algorithm>

using namespace std;

const int N = 50000, MOD = 1000000007;
int cards[N];

int main() {
  int t, n;
  cin >> t;

  for (int i = 0; i < t; ++i) {
    cin >> n;

    for (int j = 0; j < n; ++j) {
      cin >> cards[j];
    }

    long long solutions = 1LL;
    sort(cards, cards + n);

    if (cards[0] != 0 || cards[n - 1] >= n) {
      solutions = 0LL;
    } else {
      for (int j = n - 1; j >= 0; --j) {
        if (cards[j] > j) {
          solutions = 0LL;
          break;
        }

        solutions *= j - cards[j] + 1;
        solutions %= MOD;
      }
    }

    cout << solutions << endl;
  }

  return 0;
}
