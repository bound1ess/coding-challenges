#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int size, half, sum, occurs[26];
    int offset = static_cast<int>('a'); // or simply 97
    int test_cases; cin >> test_cases;

    while (test_cases--) {
        cin >> str;
        size = str.size();

        // Check for incorrect input.
        if ((size % 2) != 0) {
            cout << -1 << endl;

            continue;
        }

        half = size / 2;
        sum = 0;

        for (int i = 0; i < 26; i++) {
            occurs[i] = 0;
        }

        // Increase.
        for (int i = 0; i < half; i++) {
            occurs[static_cast<int>(str.at(i)) - offset] += 1;
        }

        // Decrease.
        for (int i = 0; i < (size - half); i++) {
            occurs[static_cast<int>(str.at(half + i)) - offset] -= 1;
        }

        // Calculate the sum.
        for (int i = 0; i < 26; i++) {
            if (occurs[i] >= 0) {
                sum += occurs[i];
            } else {
                sum += (-1 * occurs[i]);
            }
        }

        cout << (sum / 2) << endl;
    }

    return 0;
}
