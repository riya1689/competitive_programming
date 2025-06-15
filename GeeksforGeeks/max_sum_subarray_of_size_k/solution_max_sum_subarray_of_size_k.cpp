// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     long long maximumSumSubarray(vector<int>& a,int k){
//         int n = a.size(), l=0,r=0;
//         long long ans =0,sum =0;
//         while(r<n){
//             sum += a[r];
//             if(r-1 +1 == k){
//                 ans = max(ans,sum);
//                 sum -= a[l];
//                 l++,r++;
//             }
//             else{
//                 r++;
//             }
//         }
//         return ans;
//     }
// };
// int main()
// {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout << Solution
//    return 0;
// }