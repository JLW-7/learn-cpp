#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double x, sum = 0.0;
    int n;
    cin >> x >> n;

    for (int i = 0; i <= n; i++) {
        sum += pow(x, i);
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}