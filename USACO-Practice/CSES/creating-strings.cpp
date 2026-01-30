#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    set<string> p;

    do {
        p.insert(s);
    } while (next_permutation(s.begin(), s.end()));
    
    cout << p.size() << endl;

    for (const string& a : p) {
        cout << a << "\n";
    }
}