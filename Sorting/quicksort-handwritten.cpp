#include <bits/stdc++.h>

using namespace std;

int part(vector<int>& v, int low, int high) {
    int pivot = v[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (v[j] <= pivot) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], pivot);
    return i + 1;
}

void quickSort(vector<int>& v, int low, int high) {
    if (low >= high) return;
    int pivot = part(v, low, high);
    quickSort(v, low, pivot - 1);
    quickSort(v, pivot + 1, high);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n
    vector<int> v(n);
    for (int& x : v) { cin >> x; }
    quickSort(v, 0, n - 1);
}