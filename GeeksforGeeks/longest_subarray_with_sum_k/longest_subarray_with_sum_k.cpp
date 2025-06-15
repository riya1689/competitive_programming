#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int longestSubarray(vector<int>& arr,int k){
        unordered_map<long long,int>prefixidx;
        long long prefixSum =0;
        int mx_len =0;
        for(int i=0;i<arr.size();i++){
            prefixSum += arr[i];
            if(prefixSum == k){
                mx_len = i+1;
            }
            if(prefixidx.find(prefixSum - k) != prefixidx.end()){
                int previIdx = prefixidx[prefixSum - k];
                mx_len = max(mx_len , i-previIdx);

            }
            if(prefixidx.find(prefixSum)== prefixidx.end()){
                prefixidx[prefixSum] = i;
            }
        }
        return mx_len;
    }

};
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n,k;
    cin >> n>> k;
    vector<int> arr(n);
    for(int &x : arr)
    {
        cin >> x;
    }
    Solution obj;
    int ans = obj.longestSubarray(arr,k);
    cout << ans << endl;
   return 0;
}