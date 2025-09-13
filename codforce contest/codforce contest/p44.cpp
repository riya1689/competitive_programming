#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n); // Use vector instead of VLA
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int find_value;
    cin >> find_value;

    int l = 0, r = n - 1;
    bool found = false; // flag to track if found
    while (l <= r) {
        int mid = l + (r - l) / 2; // safer mid calculation
        if (find_value == a[mid]) {
            cout << "Found " << a[mid] << " at position " << mid << endl;
            found = true;
            break; // very important
        }
        if (find_value > a[mid]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    if (!found) {
        cout << "Value not found" << endl;
    }

    return 0;
}
