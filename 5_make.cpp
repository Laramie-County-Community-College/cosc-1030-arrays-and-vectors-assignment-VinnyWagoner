#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator with current time for different results each run

    // Vector to store results of 500 flips
    vector<string> coinFlips;
    string coinFlipResult = "";

    // Flip the coin 500 times
    for (int i = 0; i < 500; i++) {
        int thisRandomNumber = rand();
        if ((thisRandomNumber % 2) == 0) {
            coinFlipResult = "Heads";
        } else {
            coinFlipResult = "Tails";
        }
        // Store the result in the vector
        coinFlips.push_back(coinFlipResult);
    }

    // Count the number of heads
    int headsCount = 0;
    for (const auto& flip : coinFlips) {
        if (flip == "Heads") {
            ++headsCount;
        }
    }

    // Output results
    cout << "Number of Heads: " << headsCount << '\n';
    cout << "Number of Tails: " << coinFlips.size() - headsCount << '\n';

    return 0;
}
