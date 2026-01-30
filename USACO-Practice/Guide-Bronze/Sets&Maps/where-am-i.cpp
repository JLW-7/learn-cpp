#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!freopen("whereami.in", "r", stdin)) return 1;
    if (!freopen("whereami.out", "w", stdout)) return 1;
    
    int N;
    string s;
    cin >> N;
    cin >> s;

    for (int k = 1; k <= N; k++) {
        set<string> subsets;
        bool valid = true;
        for (int i = 0; i <= N - k; i++) {
            string ss = s.substr(i, k);
            if (subsets.count(ss)) {
                valid = false;
                break;
            } else {
                subsets.insert(ss);
            }
        }

        if (valid) {
            cout << k;
            break;
        }
    }
}