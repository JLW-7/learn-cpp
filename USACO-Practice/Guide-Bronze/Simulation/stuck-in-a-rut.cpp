// Pseudocode strategy:

// for (each northCow) {
//     for (each eastCow) {
//         if (they intersect) {
//             calculate timeN, timeE;
//             if (timeN < timeE && northCow not yet stopped at x) {
//                 eastCow is stopped at timeE;
//             } else if (timeE < timeN && eastCow not yet stopped at y) {
//                 northCow is stopped at timeN;
//             }
//         }
//     }
// }


#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
}