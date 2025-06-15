//https://codeforces.com/edu/course/2/lesson/6/1/practice/status
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n,q;
    cin >> n>> q;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i< q ;i++){
        int key,l=0,r=n-1,mid;
        cin >> key;
        bool found = false;
        while(l<=r){
            mid =(l+r)/2;
            if(key == a[mid]){
                found = true;
                break;
            }
            else if(key < a[mid]){
                r=mid -1;
            }
            else {
                l = mid + 1;
            }
        }
        if(found){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
   return 0;
}