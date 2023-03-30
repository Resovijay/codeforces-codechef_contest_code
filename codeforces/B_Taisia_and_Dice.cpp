#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,s,r;
    cin>>n>>s>>r;
    vector<int>v(n-1);
    int diff = s-r;
    v.push_back(diff);
    for(int i=0;i<n-1;i++){
        v[i]=1;
        r=r-1;
    }
    int ptr =0;
    while(r!=0){
        if(v[ptr]<diff){
            v[ptr]++;
            r--;
        }
        else{
            ptr++;
        }
    }
    sort(v.begin(),v.end());

    for(int i =0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
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