#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K, N;
    cin >> K >> N;
    int cnt = 0;
    vector<vector<pair<int, int>>> v(K);
    vector<vector<int>> cows(K, vector<int>(N));

    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            int cow;
            cin >> cow;
            cows[i][j] = cow;
        }
    }

    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                v[i].push_back({cows[i][j], cows[i][k]});
            }
        }
    }

    map<pair<int, int>, int> freq;

    for (int i = 0; i < K; i++) {
        set<pair<int, int>> u(v[i].begin(), v[i].end());
        for (auto p : u) {
            freq[p]++;
        }
    }

    for (auto [p, f] : freq) {
        if (f == K) cnt++;
    }

    cout << cnt << endl;
}