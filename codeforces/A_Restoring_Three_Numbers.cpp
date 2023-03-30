#include<bits/stdc++.h>
using namespace std;
#define int long long
 void solve(){
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    cout<<x4-x1<<" "<<x4-x2<<" "<<x4-x3<<endl;
 }
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
//     int t;
//     cin>>t;
//     while(t--){
//        solve();
// }
   solve();
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}