#include<bits/stdc++.h>
using namespace std;
int main()
{
   int second , num_of_biscuit, total_second,total_biscuit;
   cin >> second >> num_of_biscuit >> total_second;
   if(total_second<second){
    cout <<0<<endl;
    return 0;
   }
   total_biscuit = num_of_biscuit * (total_second/second);
   cout << total_biscuit <<endl;
   return 0;
}