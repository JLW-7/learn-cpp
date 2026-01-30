// Binary search is a very efficient algorithm for searching through a sorted array or list. It works by repeatedly dividing the search space in half, significantly reducing the number of comparisons compared to a linear search. The key idea is to check the middle element and decide whether to search the left or right half of the array based on the comparison result.

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int start, int end, int target) {
    while (start <= end) {
        // Calculate middle index
        int mid = start + (end - start) / 2;

        // Check if target is found
        if (arr[mid] == target) {
            return mid;  // Return the index of the target
        }
        // If target is smaller, search the left half
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        // If target is larger, search the right half
        else {
            left = mid + 1;
        }
    }

    return -1;  // Target not found
}

int main() {
    vector<int> a(n);
    for (int i; i < n; i++) {
        cin >> a[i];
    }
    int target, start, end;
    cin >> start >> end;
    cin >> target;

    int result = binarySearch(a, start, end, target);
    if (result != -1) {
        cout << "Target found at index " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}

