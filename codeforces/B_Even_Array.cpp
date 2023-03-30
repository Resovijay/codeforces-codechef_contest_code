#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    int a[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]%2!=0) even++;
        }
        else if(i%2!=0){
            if(a[i]%2==0) odd++;
        }
    }
    if(odd==even) cout<<odd<<endl;
    else cout<<"-1"<<endl;
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