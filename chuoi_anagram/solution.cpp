#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        bool isAnagram(string s, string t) {
            if (s.length() != t.length())
                return false;

            vector <int> f(26, 0);
            for (int i = 0; i < s.length(); ++i) {
                ++f[s[i] - 'a'];
                --f[t[i] - 'a'];
            }

            for (int i = 0; i < s.length(); ++i)
                if (f[s[i] - 'a'] != 0)
                    return false;

            return true;
        }
};

int main() {
    string s, t;
    cin >> s >> t;

    Solution sol;
    if (sol.isAnagram(s, t)) {
        cout << "True\n";
    }
    else {
        cout << "False\n";
    }

    return 0;
}