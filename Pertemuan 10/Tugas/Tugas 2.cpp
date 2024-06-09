#include <iostream>
#include <vector>

using namespace std;

void addTtga(vector<vector<int>>& graf, int simpul, int tetangga) {
    if (simpul >= 0 && simpul < graf.size() && tetangga >= 0 && tetangga < graf.size()) {
        graf[simpul].push_back(tetangga);
    }
}

void cetakGraf(const vector<vector<int>>& graf) {
    for (int i = 0; i < graf.size(); ++i) {
        cout << "Simpul " << i << " :";
        if (!graf[i].empty()) {
            cout << " -> ";
            for (int j = 0; j < graf[i].size(); ++j) {
                cout << graf[i][j];
                if (j < graf[i].size() - 1) {
                    cout << " -> ";
                }
            }
        }
        cout << endl;
    }
}

int main() {
    int jumSimp = 5;
    
    vector<vector<int>> graf(jumSimp);

    addTtga(graf, 0, 1);
    addTtga(graf, 0, 4);
    addTtga(graf, 1, 2);
    addTtga(graf, 1, 3);
    addTtga(graf, 1, 4);
    addTtga(graf, 2, 3);
    addTtga(graf, 3, 4);
    
    cetakGraf(graf);

    return 0;
}

