//https://www.codechef.com/problems/SWPG
//Difficulty:1361
//Codechef contest starters 180
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 998244353;
ll mod_pow(ll base, int exp, int mod) {
    ll result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}
void solve() {
    int n;
    cin >> n;
    
    if (n % 2 == 1) {
        int ex = n - 1;
        ll ans = mod_pow(2, ex, mod);
        cout << ans << endl;
    } 
    
    else {
        int ex = n - 2;
        ll pow_two = mod_pow(2, ex, mod);
        ll ans = (3 * pow_two) % mod;
        cout << ans << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}