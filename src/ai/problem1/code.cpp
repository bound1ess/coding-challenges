#include <cstdio>

const int N = 100;
char grid[N][N];

inline void display_path(int n);

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%s", grid[i]);
  }

  display_path(n);
  return 0;
}

inline void display_path(int n) {
  int bot_y = -1, pri_y = -1, bot_x, pri_x;

  for (int i = 0; i < n; ++i) {
    if (bot_y > -1 && pri_y > -1) {
      break;
    }

    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == 'm') {
        bot_y = i, bot_x = j;
        break;
      }

      if (grid[i][j] == 'p') {
        pri_y = i, pri_x = j;
        break;
      }
    }
  }

  while (bot_y > pri_y) {
    printf("UP\n"), --bot_y;
  }

  while (pri_y > bot_y) {
    printf("DOWN\n"), ++bot_y;
  }

  while (bot_x > pri_x) {
    printf("LEFT\n"), --bot_x;
  }

  while (pri_x > bot_x) {
    printf("RIGHT\n"), ++bot_x;
  }
}
