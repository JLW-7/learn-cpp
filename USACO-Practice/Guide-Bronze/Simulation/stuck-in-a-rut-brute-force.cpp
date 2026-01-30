#include <bits/stdc++.h>

using namespace std;

struct Cow {
    char direction;
    int x;
    int y;
    int cnt;
    bool stopped;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<Cow> cows(N);
    map<pair<int, int>, set<int>> eaten;

    for (int i = 0; i < N; i++) {
        Cow cow;
        cow.cnt = 0;
        cow.stopped = false;
        cin >> cow.direction >> cow.x >> cow.y;
        cows[i] = cow;
        eaten[{cow.x, cow.y}].insert(1);
    }

    int moving = N, time = 1;
    while (moving > 0) {
        for (int i = 0; i < N; i++) {
            if (!cows[i].stopped) {
                if (cows[i].direction == 'E') cows[i].x++;
                if (cows[i].direction == 'N') cows[i].y++;
                cows[i].cnt++;

                if (!eaten[{cows[i].x, cows[i].y}].empty() && !eaten[{cows[i].x, cows[i].y}].count(time)) {
                    cows[i].stopped = true;
                    moving--;
                } else {
                    eaten[{cows[i].x, cows[i].y}].insert(time);
                    if (cows[i].cnt > 1000) {
                        cows[i].cnt = -1;
                        cows[i].stopped = true;
                        moving--;
                    }
                }
            }
        }
        time++;
    }

    for (Cow c : cows) {
        if (c.cnt == -1) {
            cout << "Infinity\n";
        } else {
            cout << c.cnt << "\n";
        }
    }

}