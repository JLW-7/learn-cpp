#include <bits/stdc++.h>

using namespace std;

struct M {
    int day;
    string cow;
    int change;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, cnt = 0;
    cin >> N;
    vector<M> meas(N);
    set<string> last;
    set<string> current;
    int b = 7, m = 7, e = 7;

    for (int i = 0; i < N; i++) {
        M m;
        cin >> m.day >> m.cow >> m.change;
        meas[i] = m;
    }

    sort(meas.begin(), meas.end(), [](const M &a, const M &b) {
        return a.day < b.day;
    });

    for (M i : meas) {
        last = current;

        if (i.cow == "Mildred") m += i.change;
        if (i.cow == "Bessie") b += i.change;
        if (i.cow == "Elsie") e += i.change;

        int maxAmount = max({m, b, e});

        current.clear();
        if (m == maxAmount) current.insert("Mildred");
        if (b == maxAmount) current.insert("Bessie");
        if (e == maxAmount) current.insert("Elsie");


        if (last != current) {
            cnt += 1;
        }
    }

    cout << cnt << endl;
}