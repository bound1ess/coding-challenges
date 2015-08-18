#include <iostream>

using namespace std;

long long pick_min(long long x, long long y) {
  return x < y ? x : y;
}

int main() {
  long long black, white, black_price, white_price, convert_price, best_price;
  int test_cases;
  cin >> test_cases;

  for (int i = 0; i < test_cases; ++i) {
    cin >> black >> white >> black_price >> white_price >> convert_price;

    best_price = pick_min(black * black_price, black * (white_price + convert_price));

    cout << best_price + pick_min(white * white_price, white * (black_price + convert_price));
    cout << endl;
  }

  return 0;
}
