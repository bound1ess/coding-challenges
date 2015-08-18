#include <cstdio>

const int N = 5;
char grid[N][N];

inline int abs(int n) {
  return n < 0 ? -n : n;
}

inline void display_path(int n, int bot_y, int bot_x);

int main() {
  int bot_y, bot_x;
  scanf("%d%d", &bot_y, &bot_x);

  for (int i = 0; i < N; i++) {
    scanf("%s", grid[i]);
  }

  display_path(N, bot_y, bot_x);
  return 0;
}

inline void display_path(int n, int bot_y, int bot_x) {
  int dirt_y = -1, dirt_x, min_dist = 101;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int dist = abs(bot_y - i) + abs(bot_x - j);

      if (grid[i][j] == 'd' && dist < min_dist) {
        dirt_y = i, dirt_x = j, min_dist = dist;
        //break;
      }
    }
  }

  if (bot_y > dirt_y) {
    printf("UP\n");
    return;
  }

  if (dirt_y > bot_y) {
    printf("DOWN\n");
    return;
  }

  if (bot_x > dirt_x) {
    printf("LEFT\n");
    return;
  }

  if (dirt_x > bot_x) {
    printf("RIGHT\n");
    return;
  }

  printf("CLEAN\n");
}
