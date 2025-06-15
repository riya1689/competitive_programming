#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int i=0,letter[26] ={0},j;
    while(i < s.size()){
        if(s[i] >='a' && s[i]<='z'){
        j = s[i] - 'a';
        letter[j]++;
    }
    i++;
    }
    for(i=0;i < s.size();i++)

    {
        if(letter[i]==0){
        cout << char (i + 'a')<<endl;
        return 0;
        }
        else cout << "None"<<endl;
    }
   return 0;
}