#include <iostream>
#include <algorithm>

using namespace std;

int const SIZE = 100000;

int main()
{
    int size, median, array[SIZE];

    cin >> size;

    //cout << size << endl;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    // Sort the array.
    sort(array, array + size);

    //for (int i = 0; i < size; i++) {
    //    cout << i << " " << array[i] << endl;
    //}

    if ((size % 2) == 0) {
        int half = size / 2;

        median = (array[half] + array[half - 1]) / 2;
    } else {
        median = array[(size - 1) / 2];
    }

    cout << median << endl;

    return 0;
}
