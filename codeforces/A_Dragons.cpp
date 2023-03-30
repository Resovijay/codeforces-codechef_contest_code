#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
      v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    int flag = 0;
    for(int i =0;i<n;i++){
        if(v[i].first>=s){
          flag = 1;
          break;
        }
        s+=v[i].second;
    }
    if(flag == 1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
   solve();

  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}