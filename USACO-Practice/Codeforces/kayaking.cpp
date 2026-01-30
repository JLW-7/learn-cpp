#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int sum = 0, best = __INT_MAX__;
    vector<int> w(2 * n);
    for (int &weight : w) { cin >> weight; }
    vector<int> current = w;

    sort(w.begin(), w.end());

    for (int i = 0; i < w.size(); i++) {
        for (int j = i + 1; j < w.size(); j++) {
            current = w;
            current.erase(current.begin() + j);
            current.erase(current.begin() + i);
            sum = 0;
            for (int k = 0; k < current.size(); k += 2) {
                sum += current[k + 1] - current[k];
            }
            best = min(sum, best);
        }
    }


    cout << best << endl;
}