#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>mpp;
    for(int i =1;i<n;i++){
        string temp="";
        temp+=s[i-1];
        temp+=s[i];
        mpp[temp]++;
    }    
    int ans = 0;
    string res;
   for(auto it :mpp){
      if(it.second>ans){
        ans=it.second;
        res=it.first;
      }
   }

   cout<<res<<endl;
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t=1;
    //cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}