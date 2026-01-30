// Only even numbers can be split into two even parts, while odd numbers cannot, so the strategy here is to return YES when the watermelon pieces are even, and NO when odd.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w;
    cin >> w;

    if (w % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}