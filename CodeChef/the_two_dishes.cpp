//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/MAX_DIFF
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,s,diff =0;
        cin >> n >> s;
        if(n>=s){
            diff = s;
        }
        else{
            diff = n -(s-n);
        }
        //t1 =n  ,  t2 = s-n
        cout << diff << endl;

    }
   return 0;
}