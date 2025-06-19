//https://www.codechef.com/problems/OPAR
//Codechef contest starters 180 - Difficulty:1620
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
void solve()
{
    int n;
    cin >> n;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n == 1)
    {
        cout << v[0] << '\n';
        return;
    }
    int mx = *max_element(v.begin(), v.end());
    int pos = (n - 1) / 2;
    bool ans = false;
    for (int i = 0; i < n; i += 2)
    {
        if (v[i] == mx)
        {
            ans = true;
            break;
        }
    }
    int ex = ans ? pos : max(pos - 1, 0);
    cout << mx + ex << endl;
}
int main()
{
    fio
    ll t;       
    cin >> t;   
    while (t--) 
        solve();
    
   return 0;
}