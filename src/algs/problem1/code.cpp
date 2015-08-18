#include <cstdio>

inline int sum_of_digits(int n);
inline int sum_of_prime_factors(int n);

int main() {
  int n;
  scanf("%d", &n);

  if (sum_of_digits(n) == sum_of_prime_factors(n)) {
    printf("1\n");
  } else {
    printf("0\n");
  }

  return 0;
}

inline int sum_of_digits(int n) {
  int sum = 0;

  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }

  return sum;
}

inline int sum_of_prime_factors(int n) {
  int sum = 0;

  for (int div = 2; div <= n; ++div) {
    while (n % div == 0) {
      sum += div > 9 ? sum_of_digits(div) : div;
      n /= div;
    }
  }

  return sum;
}
