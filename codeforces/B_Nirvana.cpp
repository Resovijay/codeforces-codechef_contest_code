#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> lastdigit(int n){
    vector<int>v;
    int rem;
    // int i = 1;
    // int power;
    while(n>0){
      //power = pow(10,i);
      rem = n%10;
      if(rem = 0){
        n=n-1;
        while(n>0){
        rem = n%10;
        v.push_back(rem);
        n=n/10;
        }
      }
      v.push_back(rem);
      n = n/10;
      //i++;
    }

    for(auto it: v){
        cout<<it<<" ";
    }cout<<endl;

    //return v;
}
void solve(){
    int num;      ;
    cin>>num;
    vector<int>ans = lastdigit(num);
    int res = 1;
    for(int i = 0;i<ans.size();i++){
       res*=ans[i];
    }
  //cout<<res<<endl;  
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
//     int t;
//     cin>>t;
//     while(t--){
    solve();  
// }
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}