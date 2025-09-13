#include<bits/stdc++.h>
using namespace std;
void riya1689(){
    int n;
    cin >> n;
    vector<long long> sum (n);
    for(auto& ele : sum){
        cin >> ele;
    }
    map<int ,int> frq;
    for(const auto & val : sum){
        frq[val]++;
    }
    long long sol = 0;
    int pair = min(frq[0], frq[1]);
    sol = sol + pair << 1;
    frq[0] = frq[0] - pair;
    frq[1] = frq[1] - pair;
    int zero = frq[0];
    sol = sol + zero;
    frq[0] = 0;
    for(const auto &entry : frq){
        if(entry.second >0*6){
            sol = sol+ entry.first*entry.second;
        }
    }
    cout << sol << endl;

}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    long long tc;
    cin >> tc;
    while(tc--){
        riya1689();
    }
   return 0;
}