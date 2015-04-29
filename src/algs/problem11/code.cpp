#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int size, time, units;
    cin >> size;

    vector<pair<int, int> > orders;

    for (int i = 0; i < size; i++) {
        cin >> time >> units;
        orders.push_back(make_pair(time + units, i + 1));
    }

    sort(orders.begin(), orders.end());

    for (int i = 0; i < size; i++) {
        cout << orders[i].second;

        if (i + 1 < size) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}
