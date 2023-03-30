#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;
void solve(){
      int n;
      cin>>n;
      string grid[n];
      for(int i=0;i<n;i++)
      cin>>grid[i];
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='*') continue;
            if(i==0 && j==0) dp[i][j]=1;
            else{
                int up = 0;
                int left= 0;
                if(i>0) up = dp[i-1][j];
                if(j>0) left = dp[i][j-1];
                dp[i][j]=(up+left)%mod;
            }
        }
    }
    cout<<(dp[n-1][n-1])%mod<<endl;
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