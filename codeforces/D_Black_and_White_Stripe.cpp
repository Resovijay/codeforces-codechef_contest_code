#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int i =0,j=0;
    int ans = INT_MAX;
    int count = 0;
    while(j<n){
         if(s[j]=='W') count++;
         if(j-i+1==k){
            ans=min(ans,count);
            if(s[i]=='W') count--;
            i++;
         } 
         j++;
    }
    cout<<ans<<endl;
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t;
    cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}