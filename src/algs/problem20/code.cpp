#include <iostream>
#include <string>

using namespace std;

string const digits[12] = {
    "one", "two", "three", "four", "five", "six",
    "seven", "eight", "nine", "ten", "eleven", "twelve"
};

string const digits2[5] = {
    "ten", "twenty", "thirty", "forty", "fifty"
};

string get_time(int const mins)
{
    string time;

    if (mins <= 10) {
        time = digits[mins - 1];

        return time;
    }

    if (mins < 20) {
        switch (mins) {
            case 11:
            case 12:
                time = digits[mins - 1];
                break;

            case 13:
                time = "thirteen";
                break;

            case 15:
                time = "fifteen";
                break;

            default:
                time = digits[mins - 1];
                time += "teen";
        }

        return time;
    }

    time = digits2[(mins / 10) - 1];
    time += " ";
    time += digits[(mins % 10) - 1];

    return time;
}

string get_hour(int const hours)
{
    string hour = digits[hours];

    return hour;
}

int main()
{
    int hours, mins;
    cin >> hours >> mins;

    if (mins == 0) {
        cout << get_hour(hours - 1) <<  " o' clock" << endl;
    } else if (mins == 15) {
        cout << "quarter past " << get_hour(hours - 1) << endl;
    } else if (mins == 30) {
        cout << "half past " << get_hour(hours - 1) << endl;
    } else if (mins == 45) {
        cout << "quarter to " << get_hour(hours) << endl;
    } else if (mins > 30) {
        cout << get_time(60 - mins) << " minutes to " << get_hour(hours) << endl;
    } else {
        cout << get_time(mins) << " minutes past " << get_hour(hours - 1) << endl;
    }

    return 0;
}
