#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i= 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    int m = 0;
    int b = 0;

    for(int i = 0;i<n;i++){
        if(v[i]%2==0){
            m+=v[i];
        }
        else b+=v[i];
    }

    if(m>b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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