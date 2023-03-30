#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    int a[n];
    map<int,int>mpp;
    for(int i =0;i<n;i++){
        cin>>a[i];
      mpp[a[i]]++;
    }
    if(mpp.size()==1){
        cout<<"NO"<<endl;
        return;
    }
     if(n == 1) {
        cout<<"YES"<<endl;
        return;
     }
     if(n == 2 && a[0]==a[1]){
         cout<<"NO"<<endl;
         return;
     }
     sort(a,a+n);
     reverse(a,a+n);
     cout<<"YES"<<endl;
     if(a[0]==a[1]){
        swap(a[1],a[n-1]);
     } 
     for(auto it : a){
        cout<<it<<" ";
     } cout<<endl;
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