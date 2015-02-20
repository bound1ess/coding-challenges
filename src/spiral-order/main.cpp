#include <iostream>
#include <cstdlib>

int** create_grid(int height, int width);
void print_grid(int** grid, int height, int width);
void print_in_spiral_order(int** grid, int height, int width);

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
}
