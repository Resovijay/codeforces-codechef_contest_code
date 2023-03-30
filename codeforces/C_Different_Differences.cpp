#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int k,n;
    cin>>k>>n;
    cout<<"1"<<endl;
    int res=1;
    for(int i=1;i<=k-1;i++){
        if(n-res-i+1>=k-i){
            res+=i;
        }
        else{
            res++;
        }
        cout<<res<<" ";
    }
    cout<<endl;
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