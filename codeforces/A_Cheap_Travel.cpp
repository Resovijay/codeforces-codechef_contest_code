#include<bits/stdc++.h>
using namespace std;
#define int long long
//#typedef vector<int> v
void solve(){
 int n,m,a,b;
 cin>>n>>m>>a>>b;
  int temp =ceil(b/m);
 if(temp==a){
    cout<<ceil(n*b/m)<<endl;
 }
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    // int t;
    // cin>>t;
    // while(t--){
      solve();
// }
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}