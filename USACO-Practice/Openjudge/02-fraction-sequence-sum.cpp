#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    double numerator = 2, denominator = 1, d = denominator, sum = 0;

    for (int i = 0; i < n; i++) {
        sum += (double)numerator / d;
        d = numerator;
        numerator += denominator;
        denominator = d;
    }
    cout << fixed << setprecision(4) << sum << endl;
}