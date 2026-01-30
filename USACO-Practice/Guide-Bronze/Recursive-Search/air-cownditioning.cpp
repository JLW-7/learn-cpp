#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int N, M;
ll best = __LONG_LONG_MAX__;

vector<int> s, t, c, a, b, p, m;

void search(int idx, ll cost, vector<long long> &cool) {
    if (idx == M) {
        for (int i = 0; i < N; i++) {
            for (int pos = s[i]; pos <= t[i]; pos++) {
                if (cool[pos] < c[i]) return;
            }
        }
        best = min(best, cost);
        return;
    }

    search(idx + 1, cost, cool);

    for (int pos = a[idx]; pos <= b[idx]; pos++) {
        if (pos >= 1 && pos <= 100) {
            cool[pos] += p[idx];
        }
    }

    search(idx + 1, cost + m[idx], cool);

    for (int pos = a[idx]; pos <= b[idx]; pos++) {
        if (pos >=1 && pos <= 100) {
            cool[pos] -= p[idx];
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    s.resize(N); t.resize(N); c.resize(N); 
    for (int i = 0; i < N; i++) {
        cin >> s[i] >> t[i] >> c[i];
    }

    a.resize(M); b.resize(M); p.resize(M); m.resize(M); 
    for (int i = 0; i < M; i++) {
        cin >> a[i] >> b[i] >> p[i] >> m[i];
    }

    vector<ll> cool(101, 0);
    search(0, 0, cool);

    cout << best << endl;
}
