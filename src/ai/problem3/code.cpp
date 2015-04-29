#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void display_path(int size, int bot_y, int bot_x, vector<string>& grid);

int main()
{
    int size = 5, bot_y, bot_x;
    cin >> bot_y >> bot_x;
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
    int dirt_y = -1, dirt_x, min_distance = 101;

    // find dirt
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {
            int distance = abs(bot_y - i) + abs(bot_x - j);

            if (grid[i].at(j) == 'd' && distance < min_distance) {
                dirt_y = i;
                dirt_x = j;
                min_distance = distance;
            }
        }
    }

    if (bot_y > dirt_y) {
        cout << "UP" << endl;
        return;
    }

    if (dirt_y > bot_y) {
        cout << "DOWN" << endl;
        return;
    }

    // go 1 step left or right
    if (bot_x > dirt_x) {
        cout << "LEFT" << endl;
        return;
    }

    if (dirt_x > bot_x) {
        cout << "RIGHT" << endl;
        return;
    }

    cout << "CLEAN" << endl;
}
