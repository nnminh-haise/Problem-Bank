#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0; i < (int)s.size() / 2; ++i)
            swap(s[i], s[(int)s.size() - 1 - i]);
    }
};

int main() {
	string s;
	cin >> s;
	vector <char> f;
	for (char chr: s)
		f.push_back(chr);

	Solution sol;
	sol.reverseString(f);

	for (char chr: f)
		cout << chr;
	cout << endl;
	return 0;
}