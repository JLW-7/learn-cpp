// Store all characters of the signal in a vector: signal. For each character (signal[i][j]), return it K times. For each line, return it K times. Print a newline at the end of each line.

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N, K;
    cin >> M >> N >> K;
    vector <string> signal(M * N);

    for (int i = 0; i < M * N; i++) {
        cin >> signal[i];
    }

    for (int i = 0; i < M; i++) {
        for (int k = 0; k < K; k++) {
            for (int j = 0; j < N; j++) {
                cout << string(K, signal[i][j]);
            }
            cout << "\n";
        }
    }
}