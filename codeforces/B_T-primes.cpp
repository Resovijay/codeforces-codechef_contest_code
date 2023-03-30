#include<bits/stdc++.h>
using namespace std;
// # typedef long long ll
 #define int long long

bool is_prime[1000001];
void get_primes() {
    int n = 1000000;
    for(int i=2;i<=n;i++) {
        is_prime[i] = true;
    }
 
    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }
 
}
void solve(){
     //get_primes();
     int x;
     cin>>x;
     int k = (int)sqrt(x);
  if(k*k==x && is_prime[k]){
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
       get_primes();
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