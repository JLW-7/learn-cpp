#include <bits/stdc++.h>

using namespace std;

void gs(vector<int>& v, int idx, vector<int> current, vector<vector<int>> s) {
    if (idx == v.size()) {
        if (! current.empty()) {
            s.push_back(current);
            return;
        }
    }

    current.push_back(v[idx]);
    gs(v, idx + 1, current, s);

    current.pop_back();
    gs(v, idx + 1, current, s);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> a, ans, current;
    for (int &x : a) { cin >> x; }

    gs(a, 0, current, ans);

    for (const auto& x : ans) {
        for (int n : x) {
            cout << n << " ";
        }
        cout << "\n";
    }
    
}