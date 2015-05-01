#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_subarray_sum(vector<int>& vec, int n)
{
    int max_all, max_curr;

    max_all = vec[0];
    max_curr = vec[0];

    for (int i = 1; i < n; i++) {
        max_all = max(vec[i], vec[i] + max_all);
        max_curr = max(max_curr, max_all);
    }

    return max_curr;
}

int max_subarray_nonconsec_sum(vector<int>& vec, int n)
{
    int pos = 0, sum = 0, negative = -10e4;

    for (int i = 0; i < n; i++) {
        if (vec[i] >= 0) {
            sum += vec[i];
        } else {
            pos++;

            if (vec[i] > negative)
                negative = vec[i];
        }
    }

    if (pos == n)
        return negative;
    else
        return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> vec;

        for (int i = 0; i < n; i++) {
            int elem;
            cin >> elem;

            vec.push_back(elem);
        }

        cout << max_subarray_sum(vec, n) << " " << max_subarray_nonconsec_sum(vec, n) << endl;
    }

    return 0;
}
