#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    int maxcount= 0;
    map<int,int>mpp;
    for(int i = 0;i<n;i++){
        mpp[a[i]]++;
        maxcount=max(mpp[a[i]],maxcount);
    }
    cout<<(n-maxcount)<<endl;

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