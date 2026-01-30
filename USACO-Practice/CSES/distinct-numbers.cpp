#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, d = INT_MIN, cnt = 0;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) { cin >> x; }

    sort(a.begin(), a.end());

    for (int i : a) {
        if (d != i) {
            d = i;
            cnt++;
        }
    }

    cout << cnt << endl;
}
