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
      int n;
      cin>>n;
      int p[n];
      for(int i = 0;i<n;i++){
        cin>>p[i];
      }
      //sort(p,p+n);
      int maxi = ~0;
      for(int i = 0;i<n;i++){
        if(p[i]!=i){ 
        maxi = maxi&p[i]; 
      }
      }
      cout<<maxi<<endl;
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}