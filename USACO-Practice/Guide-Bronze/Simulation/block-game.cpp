// For each letter:

// For each board:
// Calculate count of letter in side 1
// Calculate count of letter in side 2
// Take max of these two counts
// Sum those max counts over all boards

// This sum is the minimum number of blocks needed for that letter.


#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    vector<pair<string, string>> boards(N);
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> boards[i].first >> boards[i].second;
    }

    for (char i = 'a'; i <= 'z'; i++) {
        int total = 0;
        for (int j = 0; j < N; j++) {
            int cnt1 = count(boards[j].first.begin(), boards[j].first.end(), i);
            int cnt2 = count(boards[j].second.begin(), boards[j].second.end(), i);

            total += max(cnt1, cnt2);
        }
        cout << total << "\n";
    }
}