#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
void s(){
    int n;
    cin >>n;
    vector<long long> a(n);
    for(int i=0;i<n ;i++){
        cin >> a[i];
    }
    vector<long long> b = a;
    sort(all(b));
    b.erase(unique(all(b)),b.end());
    for(int i=0; i<(int)b.size(); i++){
        long long v = b[i];
        int countB =0,countC=0;
        for(int j=0;j<n;j++){
            if(a[j]==v) countB++;
            else countC++;
        }
        if(countB >0 && countC >0){
            long long g =0;
            for(int j =0;j<n;j++){
                if(a[j] !=v){
                    if(g==0)g = a[j];
                    else g = __gcd(g,a[j]);
                }
            }
            if(g!=v){
                cout <<"Yes"<<endl;
                for(int j=0;j<n;j++){
                    if(a[j] == v) cout <<1 <<" ";
                    else cout <<2 <<" ";
                }
                cout << endl;
                return;
            }
        }
    }
    cout <<"No"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    for(int i=0;i<t ;i++){
        s();
    }
    
   return 0;
}