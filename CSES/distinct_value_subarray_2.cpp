//https://cses.fi/problemset/task/2428
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n,k;cin >>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    unordered_map<int ,int>freq;
    freq.reserve(n*2);
    ll result =0;
    int distinct =0,left =0;
    for(int right=0;right <n;right++){
        if(freq[a[right]]++ == 0) distinct++;

        while(distinct > k){
            if(--freq[a[left]]==0){
                distinct--;
            }
            left++;
        }
        result += (right - left +1);

    }
    cout << result << endl;

    
   return 0;
}