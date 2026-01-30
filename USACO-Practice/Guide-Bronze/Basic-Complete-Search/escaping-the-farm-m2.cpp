#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> weights(N);
    vector<vector<int>> d;
    int ms = 0;

    for (int i = 0; i < N; i++) {
        int w;
        cin >> w;
        weights[i] = w;
        int n = w;
        vector<int> ds;
        while (n > 0) {
            ds.push_back(n % 10);
            n /= 10;
        }
        d.push_back(ds);
        ms = max(ms, (int)ds.size());
    }

    int ans = 1;
    for (int i = 1; i < (1 << N); i++) {
        int count = __builtin_popcount(mask);
        if (count <= ans) continue;
        int cnt = 0;
        bool carry = false;
        vector<int> sd(ms, 0);
        
        for (int j = 0; j < N; j++) {
            if (i & (1 << j)) {
                cnt++;
                for (int p = 0; p < d[j].size(); p++) {
                    sd[p] += d[j][p];
                    if (sd[p] >= 10) {
                        carry = true;
                        break;
                    }
                }
                if (carry) break;
            }
        }

        if (!carry) ans = max(ans, cnt);
    }

    cout << ans << endl;
}