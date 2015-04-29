#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display_path(int size, int bot_y, int bot_x, vector<string>& grid);

int main()
{
    int size, bot_y, bot_x;
    cin >> size >> bot_y >> bot_x;
    vector<string> grid;

    for (int i = 0; i < size; i++) {
        string row;
        cin >> row;

        grid.push_back(row);
    }

    display_path(size, bot_y, bot_x, grid);

    return 0;
}

void display_path(int size, int bot_y, int bot_x, vector<string>& grid)
{
    int pri_y = -1, pri_x;

    // find out where the princess is
    for (int i = 0; i < size; i++) {

        // optimize
        if (-1 < pri_y)
            break;

        for (int j = 0; j < size; j++) {
            // and here is the princess
            if (grid[i].at(j) == 'p') {
                pri_y = i;
                pri_x = j;

                break;
            }
        }
    }

    // now find the path
    if (bot_y > pri_y) {
        cout << "UP" << endl;
        return;
    }

    if (pri_y > bot_y) {
        cout << "DOWN" << endl;
        return;
    }

    // go 1 step left or right
    if (bot_x > pri_x) {
        cout << "LEFT" << endl;
        return;
    }

    if (pri_x > bot_x) {
        cout << "RIGHT" << endl;
        return;
    }
}
