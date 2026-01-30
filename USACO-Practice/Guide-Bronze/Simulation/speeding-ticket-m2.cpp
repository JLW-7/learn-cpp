#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M, l1, limit, l2, speed, before = 0, index = 0;
    cin >> N >> M;
    vector<pair<int, int>> changePoints(N + M + 1);
    vector<int> speedLimit(100);
    vector<int> bessieSpeed(100);

    for (int i = 0; i < N; i++) {
        cin >> l1 >> limit;
        changePoints[i].first = l1 + before;
        changePoints[i].second = 1;
        for (int j = 0; j < l1; j++) {
            speedLimit[index++] = limit;
        }
        before += l1;
    }

    index = 0;
    before = 0;
    for (int i = 0; i < M; i++) {
        cin >> l2 >> speed;
        changePoints[i].first = l2 + before;
        changePoints[i].second = 2;
        for (int j = 0; j < l2; j++) {
            bessieSpeed[index++] = speed;
        }
        before += l2;
    }

    sort(changePoints.begin(), changePoints.end());

    int over, maxOver = 0;
    int limitCurrent = 0, bessieCurrent = 0;
    int limitIndex = 0, bessieIndex = 0;
    for (int i = 0; i < changePoints.size()-1; i++) {
        if (changePoints[i].second == 1) {
            limitCurrent = speedLimit[changePoints[i].first];
            limitIndex ++;
            if (changePoints[i+1].second == 2 && changePoints[i+1].first == changePoints[i].first) {
                bessieCurrent = changePoints[i].first;
                bessieIndex ++;
                i++;
            }
        } else if (changePoints[i].second == 2) {
            bessieCurrent = bessieSpeed[changePoints[i].first];
            bessieIndex ++;
            if (changePoints[i+1].second == 1 && changePoints[i+1].first == changePoints[i].first) {
                limitCurrent = speedLimit[changePoints[i+1].first];
                limitIndex ++;
                i++;
            }
        }
        maxOver = max(bessieSpeed[bessieIndex]-speedLimit[limitIndex], maxOver);
    }

    cout << max(0, maxOver) << endl;
}