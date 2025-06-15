// class Solution {
//     public:
//       int search(string &pat, string &txt) {
//           // code here
//           vector<int>pf(256,0);//pattern frequency
//           vector<int>sf(256,0);//string frequnecy
//           int np = pat.size(),ns = txt.size();
//           int ps =0,ss=0;
//           int val;
//           for(int i=0;i<np;i++){
//               pf[pat[i]]++;
//               sf[txt[i]]++;
//           }
//           int cnt=0;
//           if(pf==sf) cnt++;
//           int i=0,j=np;
//           while(j<ns){
//               sf[txt[j]]++;
//               sf[txt[i]]--;
//               if(pf == sf){
//                   cnt++;
//                   i++,j++;
//               }
//           }
//           return cnt;
//       }
//   };
  