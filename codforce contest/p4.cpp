#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if(!(cin >> t)){
        return 0;
    }
    while (t--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b>> c>> d;
        int m = (c > d ? c : d);
        int soln = 0;
        for (int i = 0; i <= n; i++)
        {
            int z = n - i;
            int cpr = i * z;
            int ttl = a * i + b * z + m * cpr;
            if (ttl > soln)
            {
                soln = ttl;
            }
        }
        cout << soln << endl;
    }
    return 0;
}