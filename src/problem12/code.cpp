#include <iostream>
#include <vector>

using namespace std;

bool find_solution(vector<int> numbers)
{
    int size = numbers.size();
    vector<int> sum(size);

    if (1 == size) {
        return true;
    } else if (2 == size) {
        return false;
    }

    for (int i = 0; i < size; i++) {
        if (i == 0) {
            sum[i] = numbers[i];
        } else {
            sum[i] = sum[i - 1] + numbers[i];
        }
    }

    for (int i = 1; i < size; i++) {
        if (sum[i - 1] == (sum[size - 1] - sum[i])) {
            return true;
        }
    }

    return false;
}

int main()
{
    int cases, size;

    cin >> cases;

    while (cases--) {
        cin >> size;

        vector<int> numbers(size);

        for (int i = 0; i < size; i++) {
            cin >> numbers[i];
        }

        cout << (find_solution(numbers) ? "YES" : "NO") << endl;
    }

    return 0;
}
