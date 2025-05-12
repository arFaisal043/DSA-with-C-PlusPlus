#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return a > b; 
}

int main() {
    int numCoins;
    cin >> numCoins;

    float amountToPay;
    cin >> amountToPay;

    int targetAmount = amountToPay * 100; 
    vector<int> coinValues(numCoins);

    for (int i = 0; i < numCoins; i++) {
        float coin;
        cin >> coin;
        coinValues[i] = coin * 100; 
    }

    sort(coinValues.begin(), coinValues.end(), comp); 

    int coinsUsed = 0;
    int remaining = targetAmount;
    int i = 0;

    while (remaining > 0 && i < numCoins) {
        if (remaining >= coinValues[i]) {
            remaining -= coinValues[i];
            coinsUsed++;
        } else {
            i++;
        }
    }

    if (remaining == 0)
        cout << coinsUsed << endl;
    else
        cout << "-1" << endl;

    return 0;
}
