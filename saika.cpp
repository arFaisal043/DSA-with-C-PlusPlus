#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Package {
    string name;
    int value;
    int weight;
    double ratio;
};


void insertionSort(vector<Package>& packages) {
    for (int i = 1; i < packages.size(); i++) {
        Package key = packages[i];
        int j = i - 1;
        
        while (j >= 0 && packages[j].ratio < key.ratio) {
            packages[j + 1] = packages[j];
            j--;
        }
        packages[j + 1] = key;
    }
}

// Function for fractional knapsack algo
double fracKnapsack(vector<Package>& packages, int capacity) {
    double totalVal = 0.0;
    int remainingCap = capacity;
    
    for (const auto& pkg : packages) {
        if (remainingCap <= 0) break;
        
        if (pkg.weight <= remainingCap) {
            // for whole package
            totalVal += pkg.value;
            remainingCap -= pkg.weight;
            cout << "Taken: " << pkg.name << " (100%)" << endl;
        } 
        else {
            // for fraction of the package
            double fraction = static_cast<double>(remainingCap) / pkg.weight;
            totalVal += fraction * pkg.value;
            cout << "Taken: " << pkg.name << " (" << fraction * 100 << "%)" << endl;
            remainingCap = 0;
        }
    }
    
    return totalVal;
}

int main() {
    vector<Package> packages = {
        {"Vaccine Kit", 90, 10, 0},
        {"Emergency Fluids", 100, 20, 0},
        {"Portable Oxygen", 120, 30, 0},
        {"Pain Relief Kit", 60, 10, 0}
    };
    
    // Calculate value-to-weight ratio for each package
    for (auto& pkg : packages) {
        pkg.ratio = static_cast<double>(pkg.value) / pkg.weight;
    }
    
    // Sort packages by value-to-weight ratio in descending order
    insertionSort(packages);
    
    for (const auto& pkg : packages) {
        cout << pkg.name << ": " << pkg.ratio << endl;
    }
    cout << endl;
    
    // Drone capacity
    int capacity = 25;
    
    double maxVal = fracKnapsack(packages, capacity);
    
    cout << endl << "Maximum val delivered: " << maxVal << endl;
    
    return 0;
}