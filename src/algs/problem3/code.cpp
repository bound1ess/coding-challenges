#include <iostream>

using namespace std;

int main()
{
    int money, cost, extra;
    int test_cases;

    cin >> test_cases;

    while (test_cases--) {
        cin >> money >> cost >> extra;

        money /= cost;

        cout << money + ((money - 1) / (extra - 1)) << endl;
    }

    return 0;
}
