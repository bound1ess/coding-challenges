#include <iostream>

using namespace std;

int sum_of_digits(int);
int sum_of_prime_factors(int);

int main()
{
    int number; cin >> number;

    cout << static_cast<int>(sum_of_digits(number) == sum_of_prime_factors(number)) << endl;

    return 0;
}

int sum_of_digits(int number)
{
    int sum = 0;

    while (number > 0) {
        sum += (number % 10);
        number /= 10;
    }

    return sum;
}

int sum_of_prime_factors(int number)
{
    int sum = 0;

    for (int divisor = 2; divisor <= number; divisor++) {
        while ((number % divisor) == 0) {
            sum += (divisor > 9 ? sum_of_digits(divisor) : divisor);
            number /= divisor;
        }
    }

    return sum;
}
