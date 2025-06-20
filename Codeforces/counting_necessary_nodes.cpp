//https://codeforces.com/contest/2074/problem/F
//difficulty *2000
//Codeforces Round 1009 (Div. 3)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        int l1,r1,l2,r2;cin>>l1>>r1>>l2>>r2;
        vector<pair<ll,ll>>it1,it2;
        auto rec=[&](auto rec,int L,int R,int l,int r,vector<pair<ll,ll>>&v)->void
        {
            if(r<=L||l>=R)return;
            if(l<=L&&R<=r)
            {
                v.emplace_back(L,R);
                return;
            }
            rec(rec,L,(L+R)/2,l,r,v);
            rec(rec,(L+R)/2,R,l,r,v);
        };
        rec(rec,0,1<<25,l1,r1,it1);
        rec(rec,0,1<<25,l2,r2,it2);
        ll ans=0;
        for(auto[al,ar]:it1)
        {
            for(auto[bl,br]:it2)
            {
                ll a=ar-al,b=br-bl;
                if(a<b)swap(a,b);
                ans+=a/b;
            }
        }
        cout<<ans<<"\n";
    }
}