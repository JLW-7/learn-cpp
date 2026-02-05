#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MAXN = 20;
int n;
ll k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    vector<ll> allset(1 << n, 0);
    for (int i = 0; i < k; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        --u; --v; --w;
        allset[1 << u]++;
        allset[1 << u | 1 << w]--;
        allset[1 << u | 1 << v]--;
        allset[1 << u | 1 << v | 1 << w]++;
    }
    for (int i = 0; i < n; ++i) {
        for (int subset = 0; subset < (1 << n); ++subset) {
            if (subset & (1 << i)) {
                allset[subset] += allset[subset ^ (1 << i)];
            }
        }
    }
    ll ansMax = -1;
    ll ansWays = 0;
    for (int subset = 0; subset < (1 << n); ++subset) {
        if (allset[subset] > ansMax) {
            ansWays = 1;
            ansMax = allset[subset];
        } else if (allset[subset] == ansMax) {
            ansWays++;
        }
    }
    cout << ansMax << " " << ansWays << endl;
}
