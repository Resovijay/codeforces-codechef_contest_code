#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }


    // for(auto it:a){
    //     cout<<it<<" ";
    // }cout<<endl;



    vector<int>e;
    vector<int>o;
    for(int i=0;i<n;i++){
        if(i%2==0){
            e.push_back(a[i]);
        }
        else{
            o.push_back(a[i]);
        }
    }


    reverse(o.begin(),o.end());
    vector<int>ans;
    int k1 = 0;
    int k2 = 0;
    while(k1<o.size()){
       ans.push_back(o[k1++]);
       ans.push_back(e[k2++]);
    }
    while(k1<o.size()) {
        ans.push_back(o[k1++]);
    }
    while(k2<e.size()){
        ans.push_back(e[k2++]);
    }

    for(auto it:ans){
        cout<<it<<" ";
    }cout<<endl;
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t =1;
    //cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}