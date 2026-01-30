#include <bits/stdc++.h>

using namespace std;

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    double sum = 1.0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / factorial(i);
    }
    cout << fixed << setprecision(10) << sum << endl;
}