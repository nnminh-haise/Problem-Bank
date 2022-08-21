#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    freopen("data.txt", "r", stdin);

    int queries;
    cin >> queries;

    while (queries--) {
        int n, m, t;
        cin >> n >> m >> t;
        vector < vector < int > > adjacent_list(n);
        queue < int > q;
        vector < bool > used(n, false);
        vector < int > parent(n, -2);
        int flag = true;

        for (int i = 1; i <= m; ++i) {
            int u, v;
            cin >> u >> v;
            adjacent_list[u - 1].push_back(v - 1);
            adjacent_list[v - 1].push_back(u - 1);
        }

        for (int i = 1; i <= t; ++i) {
            int c, p;
            cin >> c >> p;
            q.push(c - 1);
            used[c - 1] = true;
        }

        while (q.empty() == false) {
            int u = q.front();
            q.pop();

            for (int v: adjacent_list[u]) {
                if (used[v] == false) {
                    q.push(v);
                    used[v] = true;
                    parent[v] = parent[u];
                }
            }
        }

        for (int u = 0; u < n; ++u) {
            if (used[u] == false) {
                flag = false;
            }
        }

        if (flag) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}