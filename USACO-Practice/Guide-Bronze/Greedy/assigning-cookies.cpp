#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> g(n);
    vector<int> s(m);
    int cnt = 0;

    for (int &i : g) { cin >> i; }
    for (int &i : s) { cin >> i; }

    sort(g.begin(), g.end(), greater<int>());
    sort(s.begin(), s.end(), greater<int>());

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s[j] >= g[i]) {
            cnt++;
            i++;
            j++;
        } else {
            i++;
        }
    }

    cout << cnt << endl;

}