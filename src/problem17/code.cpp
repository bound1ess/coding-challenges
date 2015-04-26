#include <iostream>

using namespace std;

int main() {
    int cases, members; cin >> cases;

    while (cases--) {
        cin >> members;

        cout << (members * (members - 1) / 2) << endl;
    }

    return 0;
}
