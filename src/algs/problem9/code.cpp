#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str; cin >> str;

    int chars[26],
        odd = 0,
        offset = static_cast<int>('a'),
        size = str.size();

    for (int i = 0; i < 26; i++) {
        chars[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        chars[static_cast<int>(str.at(i)) - offset] += 1;
    }

    for (int i = 0; i < 26; i++) {
        odd += (chars[i] % 2);
    }

    cout << (odd > 1 ? "NO" : "YES") << endl;

    return 0;
}
