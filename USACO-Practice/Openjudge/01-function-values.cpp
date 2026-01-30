#include <bits/stdc++.h>

using namespace std;

int main() {
    double N;
    cin >> N;
    if (N < 5) {
        cout << fixed << setprecision(3) << - N + 2.5 << endl;
    } else if (N < 10) {
        cout << fixed << setprecision(3) << 2 - 1.5 * (N - 3) * (N - 3) << endl;
    } else if (N < 20) {
        cout << fixed << setprecision(3) << N / 2 - 1.5 << endl;
    }
}