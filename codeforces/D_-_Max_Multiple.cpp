#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k,d;
    cin>>n>>k>>d;
    vector<int>v;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = a[i]+a[j];
            v.push_back(sum);
        }
    }
    int maxi = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i]%d==0){
            maxi=max(maxi,v[i]);
        } 
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
   solve();
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}