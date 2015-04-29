#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int size, max, answer = 0;
    cin >> size >> max;
    vector<int> prices(size), sum(size);

    for (int i = 0; i < size; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    for (int i = 0; i < size; i++) {
        //cout << prices[i] << endl;
        if (0 == i) {
            sum[0] = prices[0];
        } else {
            sum[i] = sum[i - 1] + prices[i];
        }

        if (sum[i] > max) {
            //cout << i << endl;
            answer = i;
            break;
        }
    }

    cout << answer << endl;

    return 0;
}
