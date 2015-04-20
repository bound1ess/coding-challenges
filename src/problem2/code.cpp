#include <iostream>

using namespace std;

int const SIZE = 2;
long long pick_min(long long values[SIZE]);

int main()
{
    long long black, white, black_price, white_price, convert_price;
    long long prices[SIZE], best_price;
    int test_cases; cin >> test_cases;

    while (test_cases--) {
        cin >> black >> white >> black_price >> white_price >> convert_price;

        prices[0] = black * black_price;
        prices[1] = black * (white_price + convert_price);

        // Pick the min value.
        best_price = pick_min(prices);

        prices[0] = white * white_price;
        prices[1] = white * (black_price + convert_price);

        cout << best_price + pick_min(prices) << endl;
    }

    return 0;
}

long long pick_min(long long values[SIZE])
{
    return (values[0] > values[1]) ? values[1] : values[0];
}
