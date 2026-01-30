#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c, m;
    char n;
    cin >> r >> c >> n >> m;

    if (m == 1) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << n;
            }
            cout << "\n";
        }
    } else if (m == 0) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (j == 0 || j == c - 1 || i == 0 || i == r - 1) {
                    cout << n;
                } else {
                    cout << ' ';
                }
            }
            cout << "\n";
        }
    }
}

