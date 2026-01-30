#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int cnt = 0;

    set<char> p(s.begin(), s.end());

    for (char i : p) {
        for (char j : p) {
            if (i >= j) continue;

            int a1 = s.find(i), a2 = s.rfind(i);
            int b1 = s.find(j), b2 = s.rfind(j);

            if ((a1 < b1 && b1 < a2) != (a1 < b2 && b2 < a2)) {
                cnt += 1;
            }
        }
    }

    cout << cnt << endl;
}