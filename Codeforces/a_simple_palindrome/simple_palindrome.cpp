#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    string vowel = "aeiou";
    long long t;
    cin >> t;
    while(t--){
        long long n,vowel_sq,rem;
        string res = "";
        cin >>n;
        vowel_sq =n/5;
        rem = n%5;
        while(vowel_sq--){
            res+= vowel;
        }
        for(long long i=0;i<rem;i++){
            res+= vowel[i];
        }
        sort(res.begin(),res.end());
        cout <<res << endl;
    }
   return 0;
}