#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t,boy=0,girl=0,e =0;
    cin >> t;
    while(t--)
    {
        int s;
        cin >> s;
        string str;
        cin >>str;
        for(int i=0;i<s;i++)
        {   
            
            if(str[i] == 'B'){
                boy+=1;
            }
            else{
                girl += 1;
            }
            e++;
            if(boy>2*girl) {
            break;
            }

        }
        cout << e << endl;
    }
   return 0;
}