#include <bit/stdc++.h>

using namespace std;

int main() {
    int n, target;
    cin >> n;
    vector<int> a(n);
    for (int i; i < n; i++) {
        cin >> a[i];
    }
    cin >> target;

    // binary_search function
    int result = binary_search(a.begin(), a.end(), target);
    cout << result << endl; // Output 1 if found, 0, if not

    // lower_bound function - searches for the first occurrence of the target
    int result = lower_bound(a.begin(), a.end(), target)
    cout << result << endl; // returns the pointer of the first occurence of the target
    result -= a.begin(); 
    cout << result << endl; // Returns the index of the target

    // upper_bound function - searches for the first element greater than the target
    int result = upper_bound(a.begin(), a.end(), target);
    cout << result << endl; // returns the pointer of the first element greater than the target
    result -= a.begin();
    cout << result << endl; // returns the index of the first element greater than the target
}
