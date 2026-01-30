// Store the limit of every kilometer in one vector, bessie's speed in every kilometer in another. Then, compare the limit and Bessie's speed kilometer by kilometer with a for loop. Lastly, find the max Bessie went over the speed limit with max(over, maxOver).
// Note: to ensure there is no negative output, return max(maxOver, 0), in case maxOver is still negative.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M, length, limit, speed;
    cin >> N >> M;
    vector<int> speedLimit(100);
    vector<int> bessieSpeed(100);
    int index = 0;

    for (int i = 0; i < N; i++) {
        cin >> length >> limit;
        for (int j = 0; j < length; j++) {
            speedLimit[index++] = limit;
        }
    }

    index = 0;
    for (int i = 0; i < M; i++) {
        cin >> length >> speed;
        for (int j = 0; j < length; j++) {
            bessieSpeed[index++] = speed;
        }
    }

    int over, maxOver = 0;
    for (int i = 0; i < 100; i++) {
        over = bessieSpeed[i] - speedLimit[i];
        maxOver = max(over, maxOver);
    }   

    cout << max(0, maxOver) << endl;

    return 0;
}