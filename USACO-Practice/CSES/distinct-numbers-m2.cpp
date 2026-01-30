#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int &x : v) { cin >> x; }

    set<int> u(v.begin(), v.end());

    cout << u.size() << endl;
}