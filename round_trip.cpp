#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void DFS(int v, unordered_map<int, bool> & visited, std::vector<std::vector<int>> & graph, std::vector<int> & parent, int p = -1){
    parent[v] = p;
    visited[v] = true;
    for (auto u : graph[v]){
        if (u == p){
            continue;
        }
        else if (visited[u]){
            std::vector<int> ans;
            while (u != -1){
                ans.push_back(u);
                u = parent[u];
            }
            cout << ans.size() << '\n';
            for (int i : ans){
                cout << i << ' ';
            }
            exit(0);
        }
        else{
            DFS(u, visited, graph, parent, v);
        }
    }
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    std::unordered_map<int, bool> visited;
    vector<int> parent(n, -1);

    for (int i = 1; i < n; i++) {
        if (!visited[i]){
            DFS(i, visited, graph, parent);
        }
    }

    cout << "No cycle\n";
}



void something(){
    int STRIDE_LEN = 8;
    for (int offset = 0; offset < STRIDE_LEN; ++offset){
        for (int stride = 0; stride + offset < 128; stride +=STRIDE_LEN){
            //count, arr[stride + offset];
        }
    }
}
