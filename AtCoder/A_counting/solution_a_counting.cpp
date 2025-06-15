#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b;
   cin >> a>>b;
   int count =(a>b) ? 0 : (b-a) + 1;
   cout << count << endl;
   return 0;
}