#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cases, size, card;
    long long solutions;
    cin >> cases;

    while (cases--) {
        cin >> size;
        vector<int> cards;

        for (int i = 0; i < size; i++) {
            cin >> card;
            cards.push_back(card);
        }

        sort(cards.begin(), cards.end());
        solutions = 1;

        // in the first case, no cards can be picked
        // in the second case, not all cards can be picked
        if (cards[0] != 0 || cards[size - 1] >= size) {
            solutions = 0;
        } else {
            for (int i = (size - 1); i >= 0; i--) {
                // not possible to pick
                if (cards[i] > i) {
                    solutions = 0;
                    break;
                }

                solutions *= i - cards[i] + 1;
                solutions %= 1000000007;
            }
        }

        cout << solutions << endl;
    }

    return 0;
}
