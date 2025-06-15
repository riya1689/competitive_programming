// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int cnt=0;
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]!= s[i+1]){
//                 cnt++;
//             }
//         }
//         cout <<(int)(cnt/2) << endl;
//     }
//    return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        if (s[0] == '0')
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                if (s[i] == '0'){
                    cnt0++;
                }
            
                else
                {
                    cnt1++;
                }
            }
        }
        cout << "0 substring:" << cnt0 << endl;
        cout << "1 substring:" << cnt1 << endl;
        cout << endl;
    }
    return 0;
}