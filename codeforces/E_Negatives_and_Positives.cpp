#include<bits/stdc++.h>
using namespace std;
//#define int long long
void solve(){
    long long n;
    cin>>n;
    long long a[n];
   long long neg_count = 0;
    vector<long long>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0) neg_count++;
        if(a[i]<0)
       v.push_back(-1*a[i]);
       else{
       v.push_back(a[i]);
       }
    }
    int sum = accumulate(v.begin(),v.end(),0);
    sort(v.begin(),v.end());
    if(neg_count%2==0){
        cout<<sum<<endl;
    }
    else{
        int ans = sum-2*v[0];
        cout<<ans<<endl;
    }
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