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
    int station,queries;
    cin >> station >> queries;
    map<int,set<int>>mp;
    for(int i=1;i<=station;i++)
    {
        int x;
        cin >>x;
        mp[x].insert(i);
    }
    for(int i=1;i<=queries;i++)
    {
        int current_station,dest_station;
        cin >> current_station >> dest_station;
        if((mp.find(current_station) ==mp.end())||(mp.find(dest_station)== mp.end())){
            cout<<"NO"<<endl;
        }
        else{
            int startingStationLeftMostIndex,endingStationRightMostIndex;
            startingStationLeftMostIndex = *mp[current_station].begin();
            endingStationRightMostIndex = *mp[dest_station].rbegin();
            if(startingStationLeftMostIndex < endingStationRightMostIndex)
            {
                cout <<"YES"<<endl;

            }
            else cout <<"NO"<<endl;
        }
    }
   }
   return 0;
}