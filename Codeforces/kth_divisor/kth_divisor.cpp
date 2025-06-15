#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    long long n,k;
    cin >> n >> k;
    vector <long long> divisors;
    for(long long i=1;i*i <=n;i++){
        if(n%i == 0){
            divisors.push_back(i);
            if((n/i)!=i){
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());
    if(divisors.size()<k){
        cout<<-1<<endl;
    }
    else{
        cout<<divisors[k-1]<<endl;
    }

   return 0;
}