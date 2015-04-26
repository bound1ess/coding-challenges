#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Order {
    private:
        int index, units;
    public:
        Order() {}
        Order(int index, int units): index(index), units(units) {}

        int get_index() const {
            return index;
        }

        bool operator < (const Order& order) const {
            return units < order.units;
        }
};

int main()
{
    int size, time, units; cin >> size;
    vector<Order> orders(size);

    for (int i = 0; i < size; i++) {
        cin >> time >> units;
        orders[i] = Order(i + 1, time + units);
    }

    sort(orders.begin(), orders.end());

    for (int i = 0; i < size; i++) {
        cout << orders[i].get_index();

        if (i + 1 < size) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}
