// Name: It's Mooin' Time IV
// Link: https://usaco.org/index.php?page=viewproblem&cpid=1551
// Date: 2026
// Contest: 2
// Problem: 1
// Level: Bronze

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T, k;
    cin >> T >> k;

    for (int i = 0; i < T; i++) {
        int N;
        string S;
        int flips = 0;
        cin >> N;
        cin >> S;
        vector<char> ans(N);
        for (int i = N - 1; i >= 0; i--) {
            if (flips % 2 == 1) {
                ans[i] = (S[i] == 'M') ? 'O' : 'M';
            } else {
                ans[i] = S[i];
            }
            if (ans[i] == 'O') {
                flips++;
            }
        }
        cout << "YES" << "\n";
        if (k == 1) {
            for (int i = 0; i < N; i++) {
                cout << ans[i];
            }
            cout << endl;
        }
    }
}