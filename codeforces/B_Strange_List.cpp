#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>>v;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back({x,1});
    }
     for(int i = 0;i<v.size();i++){
        if(v[i].first%x==0){
            v.push_back({v[i].first/x,x*v[i].second});
        }
        else{
            break;
        }
     }
     int sum = 0;
     for(auto it:v){
      sum+=(it.first*it.second);
     }
    cout<<sum<<endl;
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