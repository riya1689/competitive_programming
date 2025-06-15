#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); 
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int first_b = s.find_first_of('B');
        int last_b = s.find_last_of('B');
        int make_white = (last_b - first_b)+1;
        cout << make_white << endl;
    }
   return 0;
}