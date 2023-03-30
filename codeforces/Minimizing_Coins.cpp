#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin>>n>>k;
    int coins[n];
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    
    vector<int>prev(k+1,0);
    for(int t = 0;t<=k;t++){
        if(t%coins[0]==0){
            prev[t] = t/coins[0];
        }
        else{
            prev[t] = INT_MAX;
        }
    }

   for(int i=1;i<n;i++){
     vector<int>curr(k+1,0);
    for(int t = 0;t<=k;t++){
        int take = INT_MAX;
        int not_take = prev[t];
        if(t>=coins[i]){
            take = 1+curr[t-coins[i]];
        }
        curr[t] = min(take,not_take);
    }
    prev=curr;
   }
 int ans = INT_MAX;
 ans = prev[k];
 if(ans==INT_MAX){
    cout<<"-1"<<endl;
 }
 else
  cout<<prev[k]<<endl;

}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t=1;
   // cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}