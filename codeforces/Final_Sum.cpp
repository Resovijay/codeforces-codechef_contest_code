#include<bits/stdc++.h>
using namespace std;
#define int long long

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
      int n,q;
      cin>>n>>q;
      int a[n];
      for(int i = 0;i<n;i++){
        cin>>a[i];
      }
       int sum = 0;
      for(int i = 0;i<n;i++){
        sum+=a[i];
      }

      while(q--){
        int l,r;
        cin>>l>>r;
       if((r-l+1)%2!=0) sum+=1;

      }
      cout<<sum<<endl;

}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}