#include <iostream>
using namespace std;

double HighestPrice(const double *prices, int n) {
    double highest = *prices;
    for (int i = 1; i < n; i++) {
        if (*(prices + i) > highest) {
            highest = *(prices + i);
        }
    }
    return highest;
}

int main() {
    double prices[7] = {12.5, 45.0, 9.99, 78.4, 23.1, 88.75, 34.2};

    double maxPrice = HighestPrice(prices, 7);
    cout << "Highest Price: " << maxPrice << endl;

    return 0;
}


