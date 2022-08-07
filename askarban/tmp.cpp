// https://www.spoj.com/problems/AKBAR/
#include <bits/stdc++.h>
// Common file
#include <ext/pb_ds/tree_policy.hpp> 

using namespace __gnu_pbds;
using namespace std;


using ll = long long;
using pi = pair<int, int>;
using ti = tuple<int, int, int>;
using tl = tuple<ll, ll, ll>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using pl = pair<ll, ll>;
using vi = vector<int>;
using vl =  vector<ll>;
using vpi = vector<pi>;
using vpil = vector<pil>;
using vpli = vector<pli>;
using vpl = vector<pl>;
using vti = vector<ti>;
using vtl = vector<tl>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvpi = vector<vpi>;
using vvpil = vector<vpil>;
using vvpli = vector<vpli>;
using vvpl = vector<vpl>;
using vvti = vector<vti>;
using vvtl = vector<vtl>;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = INT_MAX;
const ll LINF = LLONG_MAX;
const int MOD = 1000000000 + 7;

#define setbits(n) __builtin_popcount(n)
/* #define len(x) (int)size(x) */

/* void setIO(string name = "") { */
/* 	ios_base::sync_with_stdio(false); */
/* 	cin.tie(nullptr); */
/* 	if (len(name)) { */
/* 		ignore = freopen((name + ".in").c_str(), "r", stdin); */
/* 		ignore = freopen((name + ".out").c_str(), "w", stdout); */
/* 	} */
/* } */
const int N = (int) 1e6;
vi g[N+1];
// visited[i] Stores the root node of the bfs tree of which node i is a part
int visited[N+1];
vpi src;

bool bfs() {
	queue<pi> q;
	int sz = (int) src.size();
	for (int i = 0; i < sz; i++) {
		q.push({src[i].first, src[i].second});
		visited[src[i].first] = src[i].first;
	}
	while (!q.empty()) {
		int u = q.front().first;
		int strength = q.front().second;
		assert(visited[u]);
		q.pop();
		if (strength <= 0) {
			continue;
		}
		for (int v : g[u]) {
			if (!visited[v]) {
				visited[v] = visited[u];
				q.push({v, strength-1});
			} else {
				if (visited[v] == visited[u]) {
					continue;
				}
				assert(visited[v] != visited[u]);
				return false;
			}
		}
	}
	return true;
}
void reset(int n) {
	for (int i = 1; i <= n; i++) {
		g[i].clear();
		visited[i] = 0;
	}
	src.clear();
}
int main() {
    freopen("data.txt", "r", stdin);

	/* setIO(); */
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin >> T;
	while (T--) {
		int n, r, m;
		cin >> n >> r >> m;
		for (int i = 0; i < r; i++) {
			int u, v;
			cin >> u >> v;
			g[u].emplace_back(v);
			g[v].emplace_back(u);
		}
		/* for (int i = 1; i <= n; i++) { */
		/* 	cout << i << "\n"; */
		/* 	for (int v : g[i]) { */
		/* 		cout << v << " "; */
		/* 	} */
		/* 	cout << endl; */
		/* } */
		/* cout << endl; */
		for (int i = 0; i < m; i++) {
			int k, s;
			cin >> k >> s;
			src.emplace_back(k, s);
		}
		bool flag = bfs();
		if (!flag) {
			cout << "No\n";
		} else {
			bool ans = true;
			for (int i = 1; i <= n; i++) {
				if (!visited[i]) {
					ans = false;
					break;
				}
			}
			if (ans) {
				cout << "Yes\n";
			} else {
				cout << "No\n";
			}
		}
		reset(n);
	}
	return 0;
}