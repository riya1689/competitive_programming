#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n,k;
    cin >> n >>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    unordered_map<int ,int> freq;
    long long l=0,ans=0,diff=0;
    for(int r=0;r<n;r++){
        freq[a[r]]++;
        if(freq[a[r]] == 1) diff++;
        while(diff > k){
            freq[a[l]]--;
            if(freq[a[l]] ==0){
                diff--;
            }
            l++;
        }
        ans+=(r-l+1);
    }
    cout << ans <<endl;
   return 0;
}