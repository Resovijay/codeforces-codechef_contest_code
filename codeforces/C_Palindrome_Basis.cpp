#include<bits/stdc++.h>
using namespace std;
#define int long long
int N = 4e4;
int mod = 1e9+7;

//globally declare a vector which store all palindrome till N;
vector<int>v;
//STORING ALL PALINDOME//
void precompute(){
    for(int i = 1;i<=N;i++){
      string temp = to_string(i);
      string rev = temp;
      reverse(rev.begin(),rev.end());
      if(temp==rev)
       v.push_back(i);
    }
}


// int solve(int ind,int target ,vector<vector<int>>&dp){
//         if(ind==0){
//             return (target%v[0]==0);
//         }
//         if(dp[ind][target]!=-1) return dp[ind][target];
//         int not_take = solve(ind-1,target,dp);
//         int take = 0;
//         if(v[ind]<=target){
//             take = 1+solve(ind,target-v[ind],dp);
//         }
//         return dp[ind][target]=take+not_take;
// }

signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif
 precompute();
 
   int n_p = v.size();
    vector<vector<int>>dp(n_p+1,vector<int>(N+1,0));
     for( int target = 0;target<=N;target++){
        dp[0][target]=(target%v[0]);
     }
     for(int ind=1;ind<=v.size();ind++){
       for(int target = 0;target<=N;target++){
        int not_take = dp[ind-1][target];
        int take = 0;
        if(v[ind]<=target){
            take = 1+dp[ind][target-v[ind]];
        }
       dp[ind][target]=(take+not_take)%mod;
       }
     }

       //Your Code
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ans = dp[v.size()][n];
    cout<<ans%mod<<endl;
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}

