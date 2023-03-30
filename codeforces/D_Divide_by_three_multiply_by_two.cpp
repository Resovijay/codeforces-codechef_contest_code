#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    set<pair<int,int>>s;
    for(int i = 0;i<n;i++){
        cin>>v[i];
        int y = 0;
        int x =v[i];
        while(x%3==0){
            y++;
            x/=3;
        }
        s.insert({-y,v[i]});
    }
   for(auto it:s){
    cout<<it.second<<" ";
   }cout<<endl;
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t=1;
    //cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}