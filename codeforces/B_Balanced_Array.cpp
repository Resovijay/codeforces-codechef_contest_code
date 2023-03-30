#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>v;
    if(n%4==0){
      cout<<"YES"<<endl;
      for(int i = 1;i<=n;i++){
       if(i%2==0) v.push_back(i);
      }
        for(int i = 1;i<n;i++){
       if(i%2!=0) v.push_back(i);
      }
      v[n-1]=v[n-1]+n/2;
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;
    }
    else cout<<"NO"<<endl;
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