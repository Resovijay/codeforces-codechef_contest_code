#include<bits/stdc++.h>
using namespace std;
#define int long long
int fact[1000000];
void precompute(){
   fact[0]=1;
   int ans = 1;
   for(int i =0 ;i<=100005;i++){
    ans=(ans*i)%mod;
    fact[i] = ans;
   }
}
void solve(){
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++) cin>>a[i];
    int count=0;
    for(int i =0;i<n-1;i++){
        if((a[i]%2!=0 && a[i+1]%2!=0) ||(a[i]%2==0 && a[i+1]%2==0)) count++;
    }
    cout<<count<<endl;
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif
precompute();
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