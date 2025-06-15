#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); 
    int n;
    cin >> n;
    deque <int> card(n);
    for(int i=0;i<n;i++)
    {
        cin>>card[i];
    }
    int sereja =0,dima =0,turn =1;
    while(!card.empty())
    {
        int left=card.front(), right = card.back(),mx=max(left,right);
        if(turn%2!=0)
        {
            sereja+=mx;
        }
        else{
            dima += mx;
        }
        if(mx == left)
        {
            card.pop_front();
        }
        else{
            card.pop_back();
        }
        turn++;
    }
    cout << sereja <<" "<<dima << endl;
   return 0;
}