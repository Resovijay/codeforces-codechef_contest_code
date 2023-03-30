#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
  int  n;
  char c;
  cin>>n>>c;
  string s;
  cin>>s;
  if(c=='g'){
    cout<<"0"<<endl;
    return;
  }
  vector<int>g;
  s+=s;
  for(int i=0;i<2*n;i++){
      if(s[i]=='g') g.push_back(i);
  }
  int ans = 0;
  for(int i =0;i<n;i++){
    if(s[i]==c){
        int up = lower_bound(g.begin(),g.end(),i)-g.begin();
        ans=max(ans,g[up]-i);
    }
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