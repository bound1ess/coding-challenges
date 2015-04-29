#include <iostream>
#include <string>

using namespace std;

int const MAX_SIZE = 100;

int main()
{
    int chars[26], size, rocks, counter = 0, char_code, offset = 97; // 'a'
    int added_chars[MAX_SIZE], top = 0;
    bool skip;
    string str;

    cin >> rocks;

    for (int i = 0; i < 26; i++) {
        chars[i] = 0;
    }

    for (int i = 0; i < rocks; i++) {
        top = 0;
        fill_n(added_chars, MAX_SIZE, 0);

        cin >> str;
        size = str.size();

        for (int i = 0; i < size; i++) {
            char_code = static_cast<int>(str.at(i));
            skip = false;

            for (int j = 0; j < MAX_SIZE; j++) {
                if (char_code == added_chars[j]) {
                    skip = true;
                    break;
                }
            }

            if (skip) {
                continue;
            }

            chars[char_code - offset] += 1;
            added_chars[top++] = char_code;
        }
    }

    for (int i = 0; i < 26; i++) {
        //cout << chars[i] << endl;
        if (chars[i] == rocks) {
            counter += 1;
        }
    }

    cout << counter << endl;

    return 0;
}
