#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*d==b*c) {cout<<"0"<<endl;
    return;
    }
    if((b*c)!=0 &&(a*d)%(b*c)==0 || (a*d)!=0&&(b*c)%(a*d)==0) cout<<"1"<<endl;
    else cout<<"2"<<endl;
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