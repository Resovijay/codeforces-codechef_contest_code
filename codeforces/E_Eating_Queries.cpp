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
      sort(a,a+n);
      reverse(a,a+n);
      int prefix[n];
      for(int i = 0;i<n;i++){
        if(i==0) prefix[i]=a[i];
        else prefix[i]=prefix[i-1]+a[i];
      }
     while(q--){
        int x;
        cin>>x;
        int l = 1,h = n,ans= -1;
     while(l<=h){
       int mid = (l+h)/2;
       if((prefix[mid-1])>=x){
        ans = mid;
        h = mid - 1;
       }
       else {l = mid + 1;}
     }
     cout<<ans<<endl;
     }
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}