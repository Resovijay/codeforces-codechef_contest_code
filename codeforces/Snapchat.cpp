#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
      for(int i=0;i<n;i++){
        cin>>b[i];
    }
     int count=0;
     int ans = 0; 
    for(int i=0;i<n;i++){
        if(a[i]!=0 && b[i]!=0) count++;
        if(a[i]==0 || b[i]==0) {
            count=0;
        }
        res=max(res,count);
    }
    cout<<ans<<endl;
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