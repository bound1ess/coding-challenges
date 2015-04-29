#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int N, K, c[100], per = 0, result = 0;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
        cin >> c[i];

    // sort in desc order
    // so we can minimize money spent
    sort(c, c + N, greater<int>());

    for (int i = 0; i < N; i++) {
        // (per / K) <= K for all cases
        result += (per / K + 1) * c[i];
        per += 1;
    }

    cout << result << endl;

    return 0;
}
