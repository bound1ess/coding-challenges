#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display_path(int size, vector<string>& grid);

int main()
{
    int size;
    cin >> size;
    vector<string> grid;

    for (int i = 0; i < size; i++) {
        string row;
        cin >> row;

        grid.push_back(row);
    }

    display_path(size, grid);

    return 0;
}

void display_path(int size, vector<string>& grid)
{
    int bot_y = -1, bot_x;
    int pri_y = -1, pri_x;

    // find out where the bot (and princess) is
    // in one go
    for (int i = 0; i < size; i++) {

        // optimize
        if (bot_y > -1 && -1 < pri_y)
            break;

        for (int j = 0; j < size; j++) {
            // found the bot!
            if (grid[i].at(j) == 'm') {
                bot_y = i;
                bot_x = j;

                break;
            }

            // and here is the princess
            if (grid[i].at(j) == 'p') {
                pri_y = i;
                pri_x = j;

                break;
            }
        }
    }

    // now find the path
    // 1) get to the same row
    while (bot_y > pri_y) {
        cout << "UP" << endl;
        bot_y--;
    }

    while (pri_y > bot_y) {
        cout << "DOWN" << endl;
        bot_y++;
    }

    // go N steps left or right
    while (bot_x > pri_x) {
        cout << "LEFT" << endl;
        bot_x--;
    }

    while (pri_x > bot_x) {
        cout << "RIGHT" << endl;
        bot_x++;
    }
}
