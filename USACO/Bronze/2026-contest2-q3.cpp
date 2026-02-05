
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll INF = (1LL<<62);
const int M = 61;
int N, Q;
vector<ll> buckets(M, INF);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> Q;

    for (int i = 0; i < N && i < M; i++) cin >> buckets[i];
    for (int i = M; i < N; i++) {
        ll tmp;
        cin >> tmp;
    }

    for (int i = 1; i < M; i++) {
        if (buckets[i-1] < INF) buckets[i] = min(buckets[i], 2LL * buckets[i-1]);
    }
    while (Q--) {
        ll ans = INF;
        ll currBucks = 0;
        ll x;
        cin >> x;
        ll currX = x;
        for (int i = M - 1; i >= 0; i--) {
            if (buckets[i] >= INF) continue;
            ll buckTake = currX / (1LL << i);
            currX -= buckTake * (1LL << i);
            currBucks += buckTake * buckets[i];
            ll tmpAns = currBucks + (currX > 0 ? buckets[i] : 0LL);
            ans = min(ans, tmpAns);
        }
        cout << ans << "\n";
    }
}
