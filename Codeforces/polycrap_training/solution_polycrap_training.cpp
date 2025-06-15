#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   multiset<int>mls;
   for(int i=1;i<=n;i++)
   {
    int x;
    cin >> x;
    mls.insert(x);
   }
   int ans =0,problem =1;
   while(!mls.empty())
   {
    auto lb = mls.lower_bound(problem);
    if(lb != mls.end())
    {
        ans++;
        mls.erase(lb);
    }
    else {
        break;
    }
    problem++;
   }
   cout << ans << endl;

   return 0;
}