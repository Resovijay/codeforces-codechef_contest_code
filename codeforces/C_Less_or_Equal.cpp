#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  int maxi;
 if(k==0){
    maxi = a[0]-1;
 }
 else{
    maxi = a[k-1];
 }
int count = 0;
for(int i = 0;i<n;i++){
    if(maxi>=a[i]) count++;
}

if(count!=k|| maxi<1||maxi>1e9) {
    cout<<"-1"<<endl;
}
else{
   cout<<maxi<<endl;
}

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