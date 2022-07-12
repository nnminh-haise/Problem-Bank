#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (int &item: a)
        cin >> item;

    stack < int > positives, negatives;
    for (int item: a)
        if (item >= 0)
            positives.push(item);
        else
            negatives.push(item);
    while (positives.empty() == false and negatives.empty() == false) {
        cout << positives.top() << " " << negatives.top() << " ";
        positives.pop();
        negatives.pop();
    }
    while (positives.empty() == false) {
        cout << positives.top() << " ";
        positives.pop();
    }
    while (negatives.empty() == false) {
        cout << negatives.top() << " ";
        negatives.pop();
    }
    cout << "\n"; 

    return 0;
}