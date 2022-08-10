#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main() {
    FASTIO

    string s;
    getline(cin, s);

    int index = s.length() - 1;
    while (index >= 0 and s[index] == ' ') {
        --index;
    }
    int length = index;
    while (index >= 0 and tolower(s[index]) >= 'a' and tolower(s[index]) <= 'z') {
        --index;
    }
    length -= index;
    cout << length << endl;
    
    return 0;
}