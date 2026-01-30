#include <bits/stdc++.h>

using namespace std;

set<string> ans;
unordered_map<char, int> f;
string c;
int n;

void strs() {
    if (c.size() == n) {
        ans.insert(c);
        return;
    }

    for (auto& [ch, cnt] : f) {
        if (cnt > 0) {
            c.push_back(ch);
            f[ch]--;
            strs();
            f[ch]++;
            c.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    n = s.size();

    for (char ch : s) {
        f[ch]++;
    }

    strs();

    cout << ans.size() << endl;

    for (const auto& p : ans) {
        cout << p << endl;
    }
}