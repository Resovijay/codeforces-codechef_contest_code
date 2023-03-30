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
      vector<int>v;
      int a,b,c;
      cin>>a>>b>>c;
     
     v.push_back(a);
     v.push_back(b);
     v.push_back(c);
      int ans = *max_element(v.begin(),v.end())-*min_element(v.begin(),v.end());
      cout<<ans<<endl;
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}