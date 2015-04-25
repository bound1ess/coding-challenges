#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int cases, size, threshold;
    bool answer;

    cin >> cases;

    while (cases--) {
        cin >> size >> threshold;

        vector<int> a(size), b(size);

        for (int i = 0; i < size; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < size; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        answer = true;

        for (int i = 0; i < size; i++) {
            //cout << (a[i] + b[i]) << endl;

            if (a[i] + b[i] < threshold) {
                answer = false;
                break;
            }
        }

        cout << (answer ? "YES" : "NO") << endl;
    }

    return 0;
}
