#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string s;
    cin>>s;
   // cout<<s<<endl;
    int n = s.length();
   //cout<<s<<endl;
    for(int i=0;i<n/2;i++){
        swap(s[(2*i-1)+1],s[(2*i)+1]);
    }
    cout<<s<<endl;
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t = 1;
    //cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}