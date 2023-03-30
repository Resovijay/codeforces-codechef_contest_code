#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int x;
    cin>>x;
    if(x%2!=0){
        cout<<"-1"<<endl;
        return;
    }
    int a = x + x/2;
    int b = x/2;
    if((a^b)==x){
        cout<<a<<" "<<b<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
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