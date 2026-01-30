// Try every possible room as the entry point.
// For each entry room:
// Simulate how the cows would fill the rooms (walking clockwise).
// Count how far each cow walks.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    int mt = 1e9;
    for (int start = 0; start < n; start++) {
        int total = 0;
        for (int offset = 0; offset < n; offset++) {
            int room = (start + offset) % n;
            total += offset * r[room];
        }
        mt = min(total, mt);
    }

    cout << mt << endl;
}