#include <iostream>
#include <cstdlib>

int** create_grid(int height, int width);
void print_grid(int** grid, int height, int width);
void print_in_spiral_order(int** grid, int height, int width);

int const TOP    = 0;
int const RIGHT  = 1;
int const BOTTOM = 2;
int const LEFT   = 3;

int main(void)
{
    int height, width;
    std::cin >> height >> width;

    int** grid = create_grid(height, width);

    print_grid(grid, height, width);
    print_in_spiral_order(grid, height, width);

    return 0;
}

int** create_grid(int height, int width)
{
    int** grid = new int*[height];

    for (int i = 0; i < height; i++) {
        grid[i] = new int[width];

        for (int j = 0; j < width; j++) {
            grid[i][j] = rand() % 100;
        }
    }

    return grid;
}

void print_grid(int** grid, int height, int width)
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << grid[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

void print_in_spiral_order(int** grid, int heigth, int width)
{
    int direction = 0, top = 0, right, bottom, left = 0;

    right  = width - 1;
    bottom = heigth - 1;

    while (left <= right && top <= bottom) {
        if (direction == TOP) {
            for (int i = left; i <= right; i++) {
                std::cout << grid[top][i] << " ";
            }

            direction = RIGHT;
            top++;

            continue;
        }

        if (direction == RIGHT) {
            for (int i = top; i <= bottom; i++) {
                std::cout << grid[i][right] << " ";
            }

            direction = BOTTOM;
            right--;

            continue;
        }

        if (direction == BOTTOM) {
            for (int i = right; left <= i; i--) {
                std::cout << grid[bottom][i] << " ";
            }

            direction = LEFT;
            bottom--;

            continue;
        }

        for (int i = bottom; top <= i; i--) {
            std::cout << grid[i][left] << " ";
        }

        left++;
        direction = TOP;
    }

    std::cout << std::endl;
}
