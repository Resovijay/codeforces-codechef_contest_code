#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    set<int>s;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>index;
    for(int i = n-1;i>=0;i--){
       if(s.find(v[i])==s.end()){
        index.push_back(v[i]);
        s.insert(v[i]);
       }
    }
    reverse(index.begin(),index.end());
    cout<<index.size()<<endl;
    for(int i=0;i<index.size();i++){
        cout<<index[i]<<" ";
    }cout<<endl;
    

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