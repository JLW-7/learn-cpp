// Name: COW Splits
// Link: https://usaco.org/index.php?page=season26contest1results
// Date: 2026
// Contest: 1
// Problem: 2
// Level: Bronze

#include <bits/stdc++.h>

using namespace std;

bool sqrstr(string S) {
    int half = S.size() / 2
    string S1 = S.substr(0, half);
    string S2 = S.substr(half);
    if (S1 == S2) {
        return true;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T, k;
    cin >> T >> k;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        if (N % 2 != 0) {
            cout << -1 << "\n";
        } else if (sqrstr(S)) {
            cout << 1 << "\n" << 1*(N*3) << "\n";
        } else {
            if (k == 1) {
                cout << 3 << "\n";
                for (char c : S) {
                    if (c == 'C') {
                        cout << 1 << ' ';
                    } else if (c == 'O') {
                        cout << 2 << ' '
                    } else {
                        cout << 3 << ' ';
                    }
                }
                cout << "\n"
            } else {
                cout << 2 << "\n";
                for (char c : S) {
                    if (c == 'C') {
                        cout << 1 << ' ';
                    } else if (c == 'O') {
                        cout << 2 << ' ';
                    } else {
                        cout << 3 << ' ';
                    }
                }
            }
        }

    }
    
}
