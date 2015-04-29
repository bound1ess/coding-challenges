#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int counter, size, cases;

    cin >> cases;

    while (cases--) {
        cin >> str;
        size = str.size();
        counter = 0;

        for (int i = 0; i <= (size - 2); i++) {
            if (str.at(i) == str.at(i + 1)) {
                counter += 1;
            }
        }

        cout << counter << endl;
    }

    return 0;
}
