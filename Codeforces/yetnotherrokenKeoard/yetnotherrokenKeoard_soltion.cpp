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
        string s,new_str;
        bool find;
        cin >> s;
        for(long i=0;i<s.size();i++)
        {
            if(s[i] == 'b')
            {
                if(!new_str.empty())
                {
                   for(int i=new_str.size()-1;i>=0 ;i--)
                   {
                    if(islower(new_str[i]))
                    {
                        new_str.erase(i,1);
                        break;
                    }
                   }
                }
            }
            else if(s[i] == 'B')
            {
                if(!new_str.empty())
                {
                   for(int i=new_str.size()-1;i>=0 ;i--)
                   {
                    if(isupper(new_str[i]))
                    {
                        new_str.erase(i,1);
                        break;
                    }
                   }
                }
            }
            else
            {
                new_str.push_back(s[i]);
            }

        }
        if(s.empty() || new_str.empty())
        {
            cout<<" "<<endl;
        }
        else{
            cout << new_str << endl;
        }
    }
   return 0;
}