#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

void reverse_segment(vector<int>& vec, int l, int r)
{
    while (l < r) {
        swap(vec[l], vec[r]);
        l++;
        r--;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> orig, sorted;

    for (int i = 0; i < n; i++) {
        int elem;
        cin >> elem;

        orig.push_back(elem);
        sorted.push_back(elem);
    }

    sort(sorted.begin(), sorted.end());

    bool swap = true;
    int l = -1, r = -1;

    for (int i = 0; i < n; i++) {
        if (orig[i] == sorted[i])
            continue;

        if (l < 0) {
            l = i;
        } else if (r < 0) {
            r = i;
        } else {
            swap = false;
            break;
        }
    }

    if (l < 0) {
        cout << "yes" << endl;
        return 0;
    }

    if (swap && l >= 0 && r >= 0 && orig[l] == sorted[r] && orig[r] == sorted[l]) {
        cout << "yes" << endl;
        cout << "swap " << l + 1 << " " << r + 1 << endl;
        return 0;
    }

    bool reverse = true, did_reverse = false;
    int i = 0;

    while (i < n - 1) {
        if (orig[i] < orig[i + 1]) {
            i++;
            continue;
        }

        if (did_reverse) {
            reverse = false;
            break;
        }

        int j = i;

        while (j < n - 1 && orig[j + 1] < orig[j]) {
            j++;
        }

        l = i;
        r = j;

        did_reverse = true;

        reverse_segment(orig, l, r);
    }

    if ( ! reverse) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
        cout << "reverse " << l + 1 << " " << r + 1 << endl;
    }

    return 0;
}
