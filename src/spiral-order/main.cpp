#include <iostream>
#include <cstdlib>

int** create_grid(int height, int width);
void print_grid(int** grid);
void print_in_spiral_order(int** grid);

int main(void)
{
    int height, width;
    std::cin >> height >> width;

    int** grid = create_grid(height, width);

    print_grid(grid);
    print_in_spiral_order(grid);

    return 0;
}
