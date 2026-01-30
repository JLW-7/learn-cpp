// this uses too much memory and time complexity, check escaping-the-farm-m2 for a more efficient solution.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> weights(N);
    vector<vector<int>> groups = {{}};

    for (int i = 0; i < N; i++) {
        int w;
        cin >> w;
        weights[i] = w;
    }
    groups.push_back({weights[0]});

    for (int i = 1; i < weights.size(); i++) {
        for (int j = 0; j < groups.size(); j++) {
            vector<int> ns = groups[j];
            ns.push_back(weights[i]);
            groups.push_back(ns);
        }
    }

    int ms = 0, ans = 1;
    for (vector<int> g : groups) {
        bool carry = false;
        if (g.size() == 1) continue;

        vector<vector<int>> d;

        for (int i : g) {
            int n = i;
            vector<int> digits;
            while (n > 0) {
                digits.push_back(n % 10);
                n /= 10;
            }
            ms = max(ms, (int)digits.size());
            d.push_back(digits);
        }

        for (int p = 0; p < ms; p++) {
            int sum = 0;
            for (int k = 0; k < g.size(); k++) {
                if (p < d[k].size()) {
                    sum += d[k][p];
                }
                if (sum >= 10) {
                    carry = true;
                    break;
                }
            }
        }

        if (!carry) ans = max(ans, (int)g.size());
    }

    cout << ans << endl;
}