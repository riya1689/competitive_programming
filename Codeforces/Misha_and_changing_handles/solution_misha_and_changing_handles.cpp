#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string,string> old_handle,new_handle;
    for(int i=1;i<= n;i++)
    {
        string a,b;
        cin >> a >> b;
        if(new_handle.find(a) != new_handle.end()){
            string s = new_handle[a];
            old_handle[s] = b;
            new_handle.erase(a);
            new_handle[b]=s;
        }
        else{
            old_handle[a] = b;
            new_handle[b] = a;
        }
    }
    cout << old_handle.size()<< endl;
    for(auto [x,y] : old_handle){
        cout <<x<<" "<<y<<endl;
    }
   return 0;
}
