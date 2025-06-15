//https://cses.fi/problemset/task/1755
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    string s;
    if(!getline(cin,s)) return 0;

    int n = s.size();
    vector<long long>freq(26,0);
    for(char c:s){
        freq[c-'A']++;
    }
    int oddcount =0,oddchar=-1;
    for(int i=0;i<26;i++){
        if(freq[i] &1){
            oddcount++;
            oddchar = i;
        }
    }
    if(oddcount > 1){
        cout <<"NO SOLUTION"<<endl;
        return 0;
    }
    string half;
    for(int i=0;i<26;i++){
        half.append(freq[i]/2,char('A' +i));
    }
    string result;result.reserve(n);
    result += half;
    if(oddchar !=-1){
        result.push_back(char('A' + oddchar));
    }
    reverse(half.begin(),half.end());
    result +=half;
    cout << result << endl;
   return 0;
}