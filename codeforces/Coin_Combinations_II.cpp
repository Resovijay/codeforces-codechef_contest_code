#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;
void solve(){
    int n,target;
    cin>>n>>target;
    vector<int>coins(n);


    for(int i=0;i<n;i++){
        cin>>coins[i];
    }


 vector<int>prev(target+1,0);
    
    for(int t = 0; t<=target;t++){
        if(t%coins[0]==0) prev[t]=1;
    }

    for(int i = 1;i<n;i++){
        vector<int>curr(target+1,0);
        for(int t = 0;t<=target;t++){
            int take = 0;
            int not_take = prev[t];
            if(t>=coins[i]){
                take = prev[t-coins[i]];
            }
            curr[t]=(take+not_take)%mod;
        }
        prev=curr;
    }
  cout<<(prev[target])%mod<<endl;
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t = 1;
    //cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}