#include <iostream>
#include <string>

using namespace std;

const string digits[] = {
  "one", "two", "three", "four", "five", "six",
  "seven", "eight", "nine", "ten", "eleven", "twelve"
};

const string digits2[] = {
  "ten", "twenty", "thirty", "forty", "fifty"
};

inline string get_time(int mins) {
  if (mins <= 10) {
    return digits[mins - 1];
  }

  string time;

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

inline string get_hour(int hours) {
  return digits[hours];
}

int main() {
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
