#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%2 == 1){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        string s="";
        char s_c ='A';
        for(int i=0;i<n/2;i++){
            s += s_c;
            s += s_c;
            s_c++;
            if(s_c > 'Z'){
                s_c = 'A';
            } 

        }
        cout <<s<<endl;

    }
   return 0;
}