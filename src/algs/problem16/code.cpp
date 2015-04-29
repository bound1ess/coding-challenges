#include <iostream>

using namespace std;

int max_index_in_range(int* arr, int left, int right)
{
    int max = left;

    for (int i = left + 1; i < right; i++) {
        if (*(arr + max) < *(arr + i)) {
            max = i;
        }
    }

    return max;
}

void swap(int* arr, int a, int b)
{
    int tmp = *(arr + a);

    arr[a] = *(arr + b);
    arr[b] = tmp;
}

int main()
{
    int size, max;
    cin >> size >> max;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        int j = max_index_in_range(arr, i, size);

        if (j == i) {
            continue;
        }

        if (max == 0) {
            break;
        } else {
            swap(arr, i, j);
            max--;
        }
    }

    for (int i = 0; i < size; i++) {
        cout << *(arr + i);

        if (i + 1 == size) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    delete [] arr;

    return 0;
}
