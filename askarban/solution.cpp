// TODO: Complete this problem please!

#include <bits/stdc++.h>

using namespace std;

bool BFS(vector < vector < int > >& adjacentNodes, vector < int >& isVisited, vector < int >& depth, vector < bool >& placed, int sourceNode, int maxDepth) {
    queue < int > q;
    q.push(sourceNode);
    isVisited[sourceNode] = 1;
    depth[sourceNode] = 0;

    while (q.empty() == false) {
        int u = q.front();
        q.pop();

        if (u != sourceNode and placed[u] == true)
            return false;

        if (depth[u] >= maxDepth)
            continue;

        for (int v: adjacentNodes[u]) {
            if (isVisited[v] == 0) {
                isVisited[v] = 1;
                depth[v] = depth[u] + 1;
                q.push(v);
            }
        }
    }

    return true;
}

int main() {
    freopen("data.txt", "r", stdin);

    int queries;
    cin >> queries;

    while (queries--) {
        int n, m, q;
        cin >> n >> m >> q;

        vector < vector < int > > adjacent_nodes(n + 1);
        vector < int > is_visited(n + 1, 0);
        vector < int > depth(n + 1, -1);
        vector < bool > placed(n + 1, false);
        vector < pair < int, int > > soliders;

        for (int i = 1; i <= m; ++i) {
            int u, v;
            cin >> u >> v;
            adjacent_nodes[u].push_back(v);
            adjacent_nodes[v].push_back(u);
        }

        for (int i = 1; i <= q; ++i) {
            int u, w;
            cin >> u >> w;
            soliders.push_back({u, w});
            placed[u] = true;
        }

        bool flag = true;
        for (pair < int, int > solider: soliders) {
            bool res = BFS(adjacent_nodes, is_visited, depth, placed, solider.first, solider.second);
            if (res == false)
                flag = false;
        }

        for (int u = 1; u <= n; ++u)
            if (is_visited[u] == 0)
                flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}