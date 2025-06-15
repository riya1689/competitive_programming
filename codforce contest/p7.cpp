#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            p[i] = n - i; // Create permutation in descending order
        }
        for (int i = 0; i < n; i++) {
            cout << p[i];
            if (i < n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}