// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);  
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         vector<int>v(n);
//         for(int i=0;i<n;i++)
//         {
//             cin >> v[i];
//         }
//         long long sum =0;
//         int cnt =0;
//         bool n_seg = false;
//         for(int x : v)
//             {
//                 sum += abs(x);
//                 if(x< 0 && !n_seg){
//                     n_seg = true;
//                     cnt++;
//                 }
//                 if(x>0){
//                     n_seg = false;
//                 }
//             }
//         cout << sum << " " << cnt << endl;
//     }
//    return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long sum =0;
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum += abs(a[i]);
        }
        int idx =0,move =0;
        while(idx < n)
        {
            if(a[idx]<0){
                while(idx < n && a[idx]<=0){
                    idx++;
                }
                move++;
            }
            else{
                idx++;
            }
        }
        cout<< sum <<" "<< move << endl;
    }
   return 0;
}