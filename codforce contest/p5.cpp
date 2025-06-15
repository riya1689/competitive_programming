#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);//used for fast input output
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i< n; i++)
        {
            cin >> a[i];
        }
        long long soln = 0;
        for (int m = 0; m < n; m++) // outer loop
        {
            int cur = -1;
            for (int r = m; r < n; r++) // inner loop
            {
                int vec = a[r];// store current element fits in strictly ascending sequence
                int ht = (vec - 1) / 2;  //(a[r] -1)/2 of a[r] mod X
                if (cur < ht)
                {
                    cur = cur + 1; // update cur to cur+1
                    soln++;
                }
                else if (cur < vec)
                {
                    cur = vec; // update cur to vec
                    soln++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << soln << endl; //print the count of sortable subarray
    }
    return 0;
}