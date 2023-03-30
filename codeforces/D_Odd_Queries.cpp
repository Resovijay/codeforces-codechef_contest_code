#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,q;
    cin>>n>>q;
    int a[n];
    int sum=0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int prefix[n];
    prefix[0] = a[0];
    for(int i = 1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
  while(q--){
    int l,r,k;
    cin>>l>>r>>k;
    l--;
    r--;
    sum=prefix[n-1];

    sum-=prefix[r];
    if(l-1>=0) sum+=prefix[l-1];
    sum=sum+(r-l+1)*k;
    if(sum%2==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }


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