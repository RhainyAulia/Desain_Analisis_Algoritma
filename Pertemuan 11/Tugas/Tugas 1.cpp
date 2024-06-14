#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>

using namespace std;

const int INF = 1e9; // Nilai besar konstan untuk mewakili tak terhingga

// Struktur untuk menyimpan graph
struct Edge {
    int node;
    int weight;
};

// Fungsi untuk menemukan jalur terpendek menggunakan algoritma Dijkstra
vector<int> dijkstra(int start, int end, const vector<vector<Edge>>& graph) {
    int n = graph.size();
    vector<int> distance(n, INF);
    vector<int> parent(n, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    distance[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (const Edge& edge : graph[u]) {
            int v = edge.node;
            int weight = edge.weight;

            if (distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                parent[v] = u;
                pq.push({distance[v], v});
            }
        }
    }

    vector<int> path;
    for (int v = end; v != -1; v = parent[v]) {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());

    return path;
}

int main() {
    const int numNodes = 7;
    vector<vector<Edge>> graph(numNodes);

	//node 1 dst.
    graph[1].push_back({6, 14});
    graph[1].push_back({3, 9});
    graph[1].push_back({2, 7});

    graph[2].push_back({1, 7});
    graph[2].push_back({3, 10});
    graph[2].push_back({4, 15});

    graph[3].push_back({1, 9});
    graph[3].push_back({2, 10});
    graph[3].push_back({4, 11});
    graph[3].push_back({6, 2});

    graph[4].push_back({2, 15});
    graph[4].push_back({3, 11});
    graph[4].push_back({5, 6});

    graph[5].push_back({6, 9});
    graph[5].push_back({4, 6});

    graph[6].push_back({3, 14});
    graph[6].push_back({3, 2});
    graph[6].push_back({5, 9});

    vector<int> path1to6 = dijkstra(1, 6, graph);
    vector<int> path1to5 = dijkstra(1, 5, graph);

//    cout << "Visualisasi : " << endl
//    	 << "\t\t     '5'" << endl
//    	 << "\t\t 9 / \t \\6" << endl
//    	 << "\t '6' \t  " (saya nyerah)
    	 
	cout << "Jalur terpendek dari Node 1 ke Node 6: ";
    for (int node : path1to6) {
        cout << node << " ";
    }
    cout << endl;

    cout << "Jalur terpendek dari Node 1 ke Node 5: ";
    for (int node : path1to5) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}

