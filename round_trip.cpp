#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void DFS(int n,
         vector<bool>& visited,
         vector<int>& parent,
         vector<vector<int>>& graph) {

    visited[n] = true;

    for (int u : graph[n]) {
        if (!visited[u]) {
            parent[u] = n;
            DFS(u, visited, parent, graph);
        }
        else if (u != parent[n]) {
            vector<int> cycle;
            cycle.push_back(u);

            int cur = n;
            while (cur != u && cur != -1) {
                cycle.push_back(cur);
                cur = parent[cur];
            }
            cycle.push_back(u); 

            cout << cycle.size() << "\n";
            for (int x : cycle) cout << x << " ";
            exit(0);
        }
    }
}


int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<bool> visited(n, false);
    vector<int> parent(n, -1);

    for (int i = 0; i < n; i++) {
        if (!visited[i]) DFS(i, visited, parent, graph);
    }

    cout << "No cycle\n";
}
