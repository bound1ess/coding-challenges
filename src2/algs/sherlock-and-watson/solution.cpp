#include <cstdio>
#include <deque>
#include <vector>

using namespace std;

int main() {
  int n, k, q;
  scanf("%d %d %d", &n, &k, &q);

  deque<int> deck;

  for (int i = 0; i < n; ++i) {
    int num;
    scanf("%d", &num);
    deck.push_back(num);
  }

  for (int i = 0; i < k; ++i) {
    //printf("moving %d to the front\n", deck.back());
    deck.push_front(deck.back());
    deck.pop_back();
  }

  vector<int> vec;

  while ( ! deck.empty()) {
    //printf("adding %d\n", deck.front());
    vec.push_back(deck.front());
    deck.pop_front();
  }

  for (int i = 0; i < q; ++i) {
    int index;
    scanf("%d", &index);
    printf("%d\n", vec[index]);
  }

  return 0;
}
