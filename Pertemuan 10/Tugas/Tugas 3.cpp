#include <iostream>
#include <vector>

using namespace std;

struct Edge {
    int target;
    int weight;
};

void addEdge(vector<vector<Edge>>& graph, int u, int v, int weight) {
    Edge edge;
    edge.target = v;
    edge.weight = weight;
    graph[u].push_back(edge);
}

int main() {
    int V = 5;
    vector<vector<Edge>> graph(V);

    addEdge(graph, 0, 1, 10);
    addEdge(graph, 0, 4, 20);
    addEdge(graph, 1, 2, 30);
    addEdge(graph, 1, 3, 40);
    addEdge(graph, 1, 4, 50);
    addEdge(graph, 2, 3, 60);
    addEdge(graph, 3, 4, 70);

    for (int u = 0; u < V; ++u) {
        cout << "Simpul " << u << " : ";
        for (size_t i = 0; i < graph[u].size(); ++i) {
            cout << "-> (" << graph[u][i].target << ", " << graph[u][i].weight << ") ";
        }
        cout << endl;
    }

    return 0;
}

