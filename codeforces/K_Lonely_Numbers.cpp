#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ln "\n"
vector<int>prime(1000005,1);
int N =1000005;
void precompute(){
    for(int i = 2;i*i<N;i++){
        if(prime[i]==1){
            for(int j = i*i;j<N;j+=i){
                prime[j]=0;
            }
        }
    }
   prime[0]=0;
   prime[1]=0;
  for(int i = 1;i<=1000000;i++){
    prime[i]+=prime[i-1];
  }
}

void solve(){
    int n;
    cin>>n;
    int temp = sqrt(n);
    cout<<prime[n]-prime[temp]+1<<ln;
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif
precompute();
       //Your Code
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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