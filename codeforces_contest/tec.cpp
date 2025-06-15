#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
//#define int long long
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes cout << "YES\n";
//#define m1 cout << "-1\n";
#define no cout << "NO\n";
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll mod = 1e9 + 7;
const ll mod2 = 1e9 + 9;
const ll mod3 = 998244353;
const double pi = 3.141592653589793238;
const long double EPS = 1e-9;
const int MAXN = 1e5 * 5;
const int LOGN = __lg(MAXN) + 1;
static const int INF = 0x3f3f3f3f;
struct seg {
    int n; vec<int> t;
    seg(int m=0){init(m);}
    void init(int m){ n=1; while(n<=m) n<<=1; t.assign(2*n,-1); }
    void upd(int i,int v){
        for(t[i+=n]=v,i>>=1;i;i>>=1) t[i]=max(t[i<<1],t[i<<1|1]);
    }
    int top() const { return t[1]; }
};
void solve() {
    int n; cin>>n;
    vec<int> a(n),b(n);
    for(int &x:a) cin>>x;
    for(int &x:b) cin>>x;

    int m=n;
    vec<vec<int>> p0(m+1),p1(m+1);
    for(int i=0;i<n;i++){
        (i%2==0? p0[a[i]]:p1[a[i]]).pb(i);
        (((i%2)^1)==0? p0[b[i]]:p1[b[i]]).pb(i);
    }

    vec<int> last0(m+1,-1), last1(m+1,-1);
    for(int i=0;i<n;i++){
        if(i%2==0)   last0[a[i]]=i; else   last1[a[i]]=i;
        if(((i%2)^1)==0) last0[b[i]]=i;  else last1[b[i]]=i;
    }
    int best=-1;
    for(int v=1;v<=m;v++)
        if(last0[v]!=-1 && last1[v]!=-1)
            best=max(best, min(last0[v],last1[v]));
    int ans = best==-1?0:best+1;

    vec<int> rp0(m+1),rp1(m+1);
    for(int v=1;v<=m;v++){
        rp0[v]= (int)p0[v].size()-1;
        rp1[v]= (int)p1[v].size()-1;
    }
    vec<int> l0(m+1,-1), l1(m+1,-1);
    seg st(m+1);

    auto calc=[&](int v)->int{
        int L0=l0[v], L1=l1[v];
        int R0 = rp0[v]>=0? p0[v][rp0[v]]:-1;
        int R1 = rp1[v]>=0? p1[v][rp1[v]]:-1;
        if(R0!=-1) --R0;
        if(R1!=-1) --R1;
        int c0 = max(L0,R1);
        int c1 = max(L1,R0);
        if(c0==-1 || c1==-1) return -1;
        return min(c0,c1);
    };
    for(int v=1;v<=m;v++) st.upd(v,calc(v));

    for(int d=0;d<n;d++){
        auto pop=[&](int v){
            while(rp0[v]>=0 && p0[v][rp0[v]]<=d) --rp0[v];
            while(rp1[v]>=0 && p1[v][rp1[v]]<=d) --rp1[v];
            st.upd(v,calc(v));
        };
        pop(a[d]); pop(b[d]);

        int cur=st.top();
        if(cur!=-1) ans=max(ans,cur+1);
        if(d%2==0)        l0[a[d]]=d; else        l1[a[d]]=d;
        if(((d%2)^1)==0)  l0[b[d]]=d; else        l1[b[d]]=d;
        st.upd(a[d],calc(a[d]));
        st.upd(b[d],calc(b[d]));
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tests; cin >> tests;
    for (int i = 0; i < tests; ++i)
    solve();
}