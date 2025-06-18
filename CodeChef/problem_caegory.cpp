//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/PROBCAT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t,x;
    cin >> t;
    while(t--){
        if(x>=1 && x<100) cout << "Easy"<<endl;
        else if(x>=100 && x<200)cout <<"Medium" <<endl;
        else if(x>=200 && x<=300) cout<<"Hard"<<endl;
    }
   return 0;
}