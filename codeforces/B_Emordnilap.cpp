#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod =1000000007;
int fact[1000000];
void precompute(){
   fact[0]=1;
   int ans = 1;
   for(int i = 1;i<=100005;i++){
    ans=(ans*i)%mod;
    fact[i] = ans;
   }
}
int power(int base, int n){
    int ans = 1;
    while(n!=0){
        if(n%2!=0){
            ans=(ans%mod*base%mod)%mod;
            n = n-1;
        }
        else{
            n/=2;
            base=(base%mod*base%mod)%mod;
        }
    }
    return ans;
}

void solve(){
    int n ;
    cin>>n;
    if(n==1) {
      cout<<"0"<<endl;
      return;
    }
    int mul = (n%mod*(n-1)%mod);
   // int div = (mul*power(2,mod-2))%mod;
    //cout<<div<<endl;
    int ans = ((mul%mod)*(fact[n]%mod))%mod;
    cout<<ans<<endl;

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