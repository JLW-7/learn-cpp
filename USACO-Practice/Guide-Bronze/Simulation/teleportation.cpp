// There are three possible scenarios. 
// 1. Haul the manure directly from a to b
// 2. Haul from a to x, and then teleport to y, then from y to b.
// 3. Haul from a to y, then teleport to x, then haul from x to b.
// Note: To ensure there are no negative numbers, as we are finding the minimum distance, we should use the absolute value function in the code.
// Find the minimum of the 3 different distances using min() with a list inside.


#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    
    int direct = abs(a - b);
    int teleport1 = abs(a - x) + abs(y - b);
    int teleport2 = abs(a - y) + abs(b - x);
    int ans = min({direct, teleport1, teleport2});

    cout << ans;
}