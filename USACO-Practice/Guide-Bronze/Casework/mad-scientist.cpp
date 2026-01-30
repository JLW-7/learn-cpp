#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    string A, B;
    int cnt = 0;
    cin >> N;
    cin >> A;
    cin >> B;

    for (int i = 0; i < A.size(); i++) {
        if (B[i] != A[i]) {
            if (i != 0 && B[i - 1] == A[i - 1]) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}