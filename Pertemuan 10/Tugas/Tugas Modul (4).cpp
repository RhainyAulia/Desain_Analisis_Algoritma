#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printMatrix(const vector<vector<int>>& costMatrix) {
    cout << "Cost List :" << endl;
    for (const auto& row : costMatrix) {
        for (int cost : row) {
            cout << "  " << cost;
        }
        cout << endl;
    }
}

int calculateCost(const vector<vector<int>>& costMatrix, const vector<int>& path) {
    int cost = 0;
    for (size_t i = 0; i < path.size() - 1; ++i) {
        cost += costMatrix[path[i]][path[i+1]];
    }
    cost += costMatrix[path.back()][path[0]];
    return cost;
}

int main() {
    int n;
    cout << "Masukkan Jumlah Kota : ";
    cin >> n;

    vector<vector<int>> costMatrix(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        cout << "Cost Element Baris Ke-:" << i + 1 << endl;
        for (int j = 0; j < n; ++j) {
            cin >> costMatrix[i][j];
        }
    }

    printMatrix(costMatrix);

    // Cari jalur terpendek
    vector<int> path(n);
    for (int i = 0; i < n; ++i) {
        path[i] = i;
    }

    int minCost = INT_MAX;
    vector<int> bestPath;

    do {
        int currentCost = calculateCost(costMatrix, path);
        if (currentCost < minCost) {
            minCost = currentCost;
            bestPath = path;
        }
    } while (next_permutation(path.begin() + 1, path.end()));

    cout << "Jalur Terpendek :" << endl;
    for (int city : bestPath) {
        cout << city + 1 << "--->";
    }
    cout << bestPath[0] + 1 << endl;

    cout << "Minimum Cost : " << minCost << endl;

    return 0;
}

