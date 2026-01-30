#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> x(n), y(n);

    for (int &c : x) {
        cin >> c;
    }
    for (int &c : y) {
        cin >> c;
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            int square = dx * dx + dy * dy;
            ans = max(ans, square);
        }
    }

    cout << ans << endl;

}