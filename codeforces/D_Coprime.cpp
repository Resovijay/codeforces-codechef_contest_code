#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int maxi = INT_MIN;
    int maxi_ind = 0;
  for(int i = 0;i<n;i++){
     cin>>a[i];
     if(a[i]>maxi){
        maxi=a[i];
        maxi_ind = i;
     }
  }
cout<<maxi<<" "<<maxi_ind<<endl;
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