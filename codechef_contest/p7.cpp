#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
class prblm2{
public:
    void shrink(){
        //TQtq
        int tq; if(!(cin >>tq))  return  ;
        int n;
        char strng[105];
        cin >> n >> strng +1;
        
        static  int dynm[105+2] [2] [2];

        memset ( dynm , 0 , sizeof(dynm));

        dynm [1] [0] [0] =1;
        for(int i=1 ;i <=n ; i++){
            // prs
            for(int s =0;s < 2 ;s++){
                for(int nes =0; nes <2 ; nes++){
                    if(!dynm[i] [s] [nes])  continue;

                    if(nes){
                        if  (strng [i] ==  '1'){

                            dynm [i+1] [0] [0] =1;
                        }
                        continue;
                    }

                    if ( s) {
                        if(strng[i]  ==  '1'){

                            dynm [i+1] [0] [0] =1;

                            dynm[i + 1] [i+1  <= n ? 1  : 0] [0] = 1;
                        }
                        else{
                            dynm[i +1] [0] [0] =1;
                        }


                    }
                    else{
                        if(strng[i]  == '1'){
                            dynm[i +1] [0] [0] =1;

                            dynm[i + 1] [i+1  <= n ? 1  : 0] [0] = 1;

                        }
                        else if( i+1 <= n && strng[i+1] == '1'){
                            dynm [i + 1] [0] [1] = 1;
                        }
                    }
                }
            }
        }
        if(dynm[n+1][0][0] || dynm[n+1] [1] [0]) cout <<"Yes"<<endl;

        else cout <<"nO"<<endl;

    }
};
int main()
{
    fio
    int t;cin>>t;
    while(t--){
        prblm2 p2soln;
        p2soln.shrink();
    }
   
   return 0;
}