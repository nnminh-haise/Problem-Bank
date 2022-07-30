#include <bits/stdc++.h>

using namespace std;

bool isAlphaNum(char chr) {
    return ('A' <= chr and chr <= 'Z' or 'a' <= chr and chr <= 'z' or '0' <= chr and chr <= '9');
}

bool isPalindrome(string str) {
    int low = 0;
    int high = str.length() - 1;
    int n = str.length();
    while (low <= high) {
        while (!isAlphaNum(str[low]) and low < n)
            ++low;
        while (!isAlphaNum(str[high]) and high >= 0)
            --high;
        if (tolower(str[low]) != tolower(str[high]))
            return false;
        ++low;
        --high;
    }
}

int main(int argc, char **argv) {
    freopen("data.txt", "r", stdin);
    string s;
    cin >> s;

    return 0;
}