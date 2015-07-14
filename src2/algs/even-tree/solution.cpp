#include <cstdio>

const int N = 100;

bool adj[N][N];

inline void add_edge(int u, int v) {
  adj[u][v] = true;
}

inline void remove_edge(int u, int v) {
  adj[u][v] = false;
}

int component_size(int u, int n) {
  int size = 1;

  for (int i = 0; i < n; ++i) {
    if (adj[u][i]) {
      size += component_size(i, n);
    }
  }

  return size;
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  for (int i = 0; i < m; ++i) {
    int u, v;
    scanf("%d %d", &u, &v);

    add_edge(v - 1, u - 1); // note: swapped u and v
  }

  int edges = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (adj[i][j] && component_size(j, n) % 2 == 0) {
        remove_edge(i, j);
        ++edges;
      }
    }
  }

  printf("%d\n", edges);
  return 0;
}
