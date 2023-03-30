#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int w,d,h,a,b,f,g;
    cin>>w>>d>>h;
    cin>>a>>b>>f>>g;
    int ans = min(h+abs(b-g)+abs(w-f)+abd(w-a),min(h+abs(b-g)+abs(0-f)+abd(0-a),min(h+abs(a-f)+abs(0-b)+abd(0-g),h+abs(a-f)+abs(d-b)+abd(d-g))));
    cout<<ans<<endl;
    //cout<<h+abs(f-a)+f<<endl;
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