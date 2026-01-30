#include <bits/stdc++.h>

using namespace std;

vector<int> pos(8);
int cnt = 0;
vector<vector<char>> grid(8, vector<char>(8));

bool safe(int r, int c) {
    if (grid[r][c] == '*') return false;
    for (int pc = 0; pc < c; pc++) {
        int pr = pos[pc];
        if (pr == r) return false;
        if (abs(pr - r) == abs(pc - c)) return false;
    }
    return true;
}

void search(int col) {
    if (col == 8) {
        cnt++;
        return;
    }
    
    for (int row = 0; row < 8; row++) {
        if (safe(row, col)) {
            pos[col] = row;
            search(col + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> grid[i][j];
        }
    }

    search(0);

    cout << cnt << endl;
}