#include<bits/stdc++.h>
using namespace std;
void s(){
    int n,s,m;
    cin >> n >> s >> m;
    vector<pair<int,int>>seg;
    seg.push_back({0,0});
    seg.push_back({m,m});
    for(int i=0;i<n;++i){
        int  l,r;
        cin >> l >> r;
        seg.push_back({l,r});
    }
    sort(seg.begin(),seg.end());
    for(int i=1;i<seg.size();++i){
        if(seg[i].first - seg[i-1].second >= s){
            cout <<"YES"<<endl;
            return;
        }
    }

    cout <<"NO"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        s();
    }
   return 0;
}