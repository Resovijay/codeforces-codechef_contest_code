#include<bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi = *max_element(a,a+n);
    int x = 0;
    for(int i=0;i<n;i++){
        x=gcd(x,a[i]);
    }
    cout<<maxi/x<<endl;

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