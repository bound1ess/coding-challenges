#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int const SIZE = 300;

int main()
{
    int test_cases, size;
    bool success;
    char grid[SIZE][SIZE];

    cin >> test_cases;

    while (test_cases--) {
        cin >> size;

        getchar();

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                grid[i][j] = getchar();
            }

            getchar();

            // Sort the array.
            sort(grid[i], grid[i] + size);
        }

        // Unfortunate O(n^2) solution.
        success = true;

        for (int i = 0; i < (size - 1); i++) {
            if ( ! success) {
                break;
            }

            for (int j = 0; j < size; j++) {
                // Compare two elements.
                if (grid[i][j] > grid[i + 1][j]) {
                    success = false;
                    break;
                }
            }
        }

        cout << (success ? "YES" : "NO") << endl;
    }

    return 0;
}
