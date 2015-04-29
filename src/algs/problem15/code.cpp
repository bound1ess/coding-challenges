#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int size; cin >> size;
    vector<int> numbers(size);

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    int units = 1, previous;
    previous = numbers[0];

    for (int i = 0; i < size; i++) {
        if ((numbers[i] - previous) > 4) {
            previous = numbers[i];
            units++;
        }
    }

    cout << units << endl;

    return 0;
}
