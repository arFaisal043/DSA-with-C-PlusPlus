#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

bool comp(pair<double, double> a, pair<double, double> b) {
    double ratioA = a.first / a.second;
    double ratioB = b.first / b.second;
    return ratioA > ratioB;
}


double maxValue(int capacity, vector<pair<double, double>> &treasures) {
    sort(treasures.begin(), treasures.end(), comp);

    double totalVal = 0.0;
    int remainingCapacity = capacity;

    for (auto &treasure : treasures) {
        if (remainingCapacity == 0) break;

        double val = treasure.first;
        double weight = treasure.second;

        double takeWeight = min((double)remainingCapacity, weight);
        totalVal += (val / weight) * takeWeight;
        remainingCapacity -= takeWeight;
    }

    return totalVal;
}

int main() {
    int itemCount, maxCapacity;
    cin >> itemCount >> maxCapacity;

    vector<pair<double, double>> treasures(itemCount); 
    for (int i = 0; i < itemCount; i++) {
        cin >> treasures[i].first >> treasures[i].second;
    }

    double result = maxValue(maxCapacity, treasures);
    cout << fixed << setprecision(1) << result << endl;

    return 0;
}
