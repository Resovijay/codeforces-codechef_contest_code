#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mpp1;
    for(int i =0 ;i<n;i++){
        mpp1[s[i]]++;
    }
    map<char,int>mpp2;
    int maxi =  INT_MIN;
    for(int i=0;i<n;i++){
        mpp2[s[i]]++;
        mpp1[s[i]]--;
        if(mpp1.second==0){
            mpp.erase(mpp1.first);
        }
        int ans = mpp1.size()+mpp2.size();
      maxi = max(ans,maxi);
    }
    cout<<maxi<<endl;
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