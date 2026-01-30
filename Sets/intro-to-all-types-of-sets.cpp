#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    // ====== set ======
    // Stores unique elements, always sorted (ascending by default)
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(3); // duplicates ignored

    cout << "Set elements (sorted): ";
    for (const auto& x : s) {
        cout << x << " ";
    }
    cout << endl;  // Output: 1 3 5

    // Check if element exists
    if (s.count(3)) cout << "3 found!" << endl;
    if (!s.count(7)) cout << "7 not found!" << endl;

    // Remove element
    s.erase(3);

    // Find element
    auto it = s.find(5);
    if (it != s.end()) cout << "Found " << *it << endl;

    s.clear(); // remove all elements


    // ====== multiset ======
    // Like set, but allows duplicates
    multiset<int> ms;

    ms.insert(5);
    ms.insert(5);
    ms.insert(1);

    cout << "Multiset elements (sorted, with duplicates): ";
    for (const auto& x : ms) {
        cout << x << " ";
    }
    cout << endl;  // Output: 1 5 5

    // Erase just ONE occurrence of 5
    auto it2 = ms.find(5);
    if (it2 != ms.end()) ms.erase(it2);

    cout << "After erasing one 5: ";
    for (const auto& x : ms) {
        cout << x << " ";
    }
    cout << endl;  // Output: 1 5

    ms.clear();


    // ====== unordered_set ======
    // Stores unique elements, order is NOT guaranteed (hash table)
    unordered_set<int> us;

    us.insert(10);
    us.insert(3);
    us.insert(7);

    cout << "Unordered set elements (order not guaranteed): ";
    for (const auto& x : us) {
        cout << x << " ";
    }
    cout << endl;

    if (us.count(3)) cout << "3 exists in unordered_set" << endl;

    us.erase(7);

    us.clear();
}
