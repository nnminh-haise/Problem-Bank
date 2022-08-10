#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

class Solution{
    public:
        int firstUniqChar(string s) {
            map <char, int> hash_map;
            for (int i = 0; i < (int)s.length(); ++i)
                ++hash_map[s[i]];
            int index = 0;
            while (hash_map[s[index]] > 1)
                ++index;
            return index;
        }
};

int main() {
    FASTIO

    freopen("data.txt", "r", stdin);

    string s;
    cin >> s;

    Solution sol;
    cout << sol.firstUniqChar(s) << endl;
    
    return 0;
}