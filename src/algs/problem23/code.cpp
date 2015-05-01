#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long LL;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        LL n;
        cin >> n;

        vector<LL> vec;

        for (LL i = 0; i < n; i++) {
            LL num;
            cin >> num;

            vec.push_back(num);
        }

        sort(vec.begin(), vec.end());

        LL sum = 0;

        for (LL i = 0; i < n; /* do not increase */) {
            LL j = i + 1;

            while (j < n && vec[j] == vec[j - 1]) {
                j++;
            }

            sum += (j - i) * (j - i - 1);
            i = j;
        }

        cout << sum << endl;
    }

    return 0;
}
