#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!freopen("lineup.in", "r", stdin)) return 1;
    if (!freopen("lineup.out", "w", stdout)) return 1;


    int N;
    cin >> N;
    cin.ignore();

    vector<string> cows = {
        "Beatrice", "Belinda", "Bella", "Bessie",
        "Betsy", "Blue", "Buttercup", "Sue"
    };

    vector<pair<string, string>> constraints;
    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);
        string a = line.substr(0, line.find(' '));
        string b = line.substr(line.rfind(' ') + 1);
        constraints.push_back({a, b});
    }

    sort(cows.begin(), cows.end());

    do {
        bool ok = true;
        for (auto &p : constraints) {
            int ix = find(cows.begin(), cows.end(), p.first) - cows.begin();
            int iy = find(cows.begin(), cows.end(), p.second) - cows.begin();
            if (abs(ix - iy) != 1) {
                ok = false;
                break;
            }
        }
        if (ok) {
            for (string cow : cows) {
                cout << cow << "\n";
            }
            return 0;
        }
    } while (next_permutation(cows.begin(), cows.end()));

    return 0;
}
