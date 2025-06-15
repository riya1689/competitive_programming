#include<bits/stdc++.h>
using namespace std;
int findMinimumXOR(vector<int>&nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int result =0;
    for (int i=0;i<n;++i){
        result^= nums[i];
    }
    int min_xor = result;
    for(int i=0;i<n;++i){
        int xor_after_removal = result^nums[i];
        min_xor = min(min_xor , xor_after_removal);
    }
    return min_xor;
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t,a;
    cin >> t;
    while(t--){
        vector<int>nums;
        int a,n;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a;
            nums.push_back(a);
        }
        int result = findMinimumXOR(nums);
        cout<<result<<endl;

    }
    
   return 0;
}