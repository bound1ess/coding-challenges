#include <iostream>

using namespace std;

int main() {
  long long row, col;
  cin >> row >> col;

  long long init = 5 * (row - 1);

  if (row % 2 == 0) {
    init -= 4;
  }

  cout << (init + 2 * (col - 1)) << endl;
  return 0;
}
