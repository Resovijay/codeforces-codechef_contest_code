#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int a,b;
    cin>>a>>b;
    int p = min(a,b);
    int q = max(a,b);
    if(q<=2*p) cout<<4*p*p<<endl;
    else cout<<q*q<<endl;
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