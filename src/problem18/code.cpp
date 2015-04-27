#include <iostream>

using namespace std;

int main()
{
    long long row, column;
    cin >> row >> column;

    long long initial = (row - 1) * 5;

    if (row % 2 == 0) {
        initial -= 4;
    }

    cout << (initial + (column - 1) * 2) << endl;

    return 0;
}
