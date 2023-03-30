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
      vector<vector<int>>ans;
      vector<pair<int,int>>op;
      int n;
      cin>>n;
      vector<int>v;
      for(int i =0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        ans.push_back(v);
      }
      for(int i =1;i<n;i++){
        if(v[i]>v[i-1]) {
            op.push_back({v[i],v[i-1]});
        }
      }
      ans.push_back(op);

      
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}