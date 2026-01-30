#include <bits/stdc++.h>

using namespace std;

struct Cow {
    int x;
    int y;
    int p;
    vector<int> valid;
};

bool yes(const Cow &a, const Cow &b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return dx*dx + dy*dy <= a.p * a.p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<Cow> cows(N);
    for (int i = 0; i < N; i++) {
        Cow cow;
        cin >> cow.x >> cow.y >> cow.p;
        cows[i] = cow;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (yes(cows[i], cows[j])) {
                cows[i].valid.push_back(j);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int cnt = 1;
        vector<bool> visited(N, false);
        queue<int> q;
        q.push(i);
        visited[i] = true;
        while (!q.empty()) {
            int c = q.front(); 
            q.pop();
            for (int n : cows[c].valid) {
                if (!visited[n]) {
                    cnt += 1;
                    visited[n] = true;
                    q.push(n);
                }
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;
}