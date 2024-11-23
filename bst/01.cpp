#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, edges;
    cin >> n >> edges;

    int adj[n][n] = {0};

    for (int i = 0; i < edges; i++) {
        int source, dest;
        cin >> source >> dest;
        adj[source][dest] = 1;
    }

    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    int start;
    cin >> start;

    int bfs[n], status[n] = {0};
    int k = 0;
    queue<int> q;

    q.push(start);
    status[start] = 1;

    while (!q.empty()) {
        int w = q.front();
        q.pop();
        bfs[k++] = w;

        for (int i = 0; i < n; i++) {
            if (adj[w][i] == 1 && status[i] == 0) {
                q.push(i);
                status[i] = 1;
            }
        }
    }

    cout << "BFS:\n";
    for (int i = 0; i < k; i++) {
        cout << bfs[i] << " ";
    }
    cout << endl;

    return 0;
}*