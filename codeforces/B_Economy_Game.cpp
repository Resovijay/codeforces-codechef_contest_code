#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
  int n;
  cin>>n;
  int flag  = 0;
  for(int i=0;i<=n;i+=1234567){
    for(int j=0;j<=n;j+=123456){
            if((n-i-j>=0) && (n-i-j)%1234==0){
                flag = 1;
                break;   
            }
    }
  }
if(flag==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
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