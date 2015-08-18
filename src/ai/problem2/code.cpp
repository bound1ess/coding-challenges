#include <cstdio>

const int N = 100;
char grid[N][N];

inline void display_path(int n, int r, int c);

int main() {
  int n, r, c;
  scanf("%d%d%d", &n, &r, &c);

  for (int i = 0; i < n; ++i) {
    scanf("%s", grid[i]);
  }

  display_path(n, r, c);
  return 0;
}

inline void display_path(int n, int r, int c) {
  int bot_y = r, pri_y = -1, bot_x = c, pri_x;

  for (int i = 0; i < n; ++i) {
    if (pri_y > -1) {
      break;
    }

    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == 'p') {
        pri_y = i, pri_x = j;
        break;
      }
    }
  }

  if (bot_y > pri_y) {
    printf("UP\n");
    return;
  }

  if (pri_y > bot_y) {
    printf("DOWN\n");
    return;
  }

  if (bot_x > pri_x) {
    printf("LEFT\n");
    return;
  }

  printf("RIGHT\n");
}
