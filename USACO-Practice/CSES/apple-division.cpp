#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> w(n);

    for (ll &i : w) { cin >> i; }

    ll ans = __LONG_LONG_MAX__;

    for (int i = 1; i < (1 << n); i++) {
        ll s1 = 0, s2 = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                s1 += w[j];
            } else {
                s2 += w[j];
            }
        }
        ans = min(abs(s1 - s2), ans);
    }

    cout << ans << endl;
}