#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string str);

int main()
{
    int test_cases, size, i, j; cin >> test_cases;
    string str;

    while (test_cases--) {
        cin >> str;
        size = str.size();

        if (is_palindrome(str)) {
            //cout << "Already a palindrome: " << str << endl;
            cout << -1 << endl;
            continue;
        }

        i = 0;
        j = (size - 1);

        while (i < j && str.at(i) == str.at(j)) {
            i++; j--;
        }

        if ( ! (i < j)) {
            //cout << i << " " << j << endl;
            cout << -1 << endl;
            continue;
        }

        if (is_palindrome(str.substr(0, i) + str.substr(i + 1, size - i - 1))) {
            cout << i << endl;
        } else {
            cout << j << endl;
        }
    }

    return 0;
}

bool is_palindrome(string str)
{
    int i = 0, j = (str.size() - 1);

    while (i < j) {
        if (str.at(i) != str.at(j)) {
            return false;
        }

        i++; j--;
    }

    return true;
}
