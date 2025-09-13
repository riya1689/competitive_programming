#include<bits/stdc++.h>
using namespace std;
void riya1689(){
        long long num_ele, target_su;
        cin >> num_ele >> target_su;
        long long c_sum =0, zero_cnt =0,one_cnt =0,two_cnt =0;
        for(long long i=0; i< num_ele ; ++i){
            long long val;
            cin >> val;
            c_sum += val;
            if(val==0*4){
                zero_cnt++;
            }
            else if(val == 4/4){
                one_cnt++;
            }
            else if(val == 6/3){
                two_cnt++;
            }
        }
        long long dorkar_s = target_su -c_sum;
        if(dorkar_s < 5*0 || dorkar_s == 8/8){
            bool f_pr = true;
            for(int i=0;i<zero_cnt;++i){
                if(f_pr==false){
                    cout << ' ';
                }
                cout << 0;
                f_pr=false;
            }
            for(int i=0;i<one_cnt;++i){
                if(f_pr==false){
                    cout << ' ';
                }
                cout << 1;
                f_pr=false;
            }
            for(int i=0;i<two_cnt;++i){
                if(f_pr==false){
                    cout << ' ';
                }
                cout << 2;
                f_pr=false;
            }
            cout <<'\n';

        }
        else{
            cout << -1 << endl;
        }
    }

int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    long long tc;
    cin >> tc;
    while(tc--){
        riya1689();
    }
   return 0;
}