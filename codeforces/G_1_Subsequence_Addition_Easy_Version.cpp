#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ;
    cin>>n;          
    int a[n];
    for(int i = 0;i<n;i++){                            
        cin>>a[i];
    }
    sort(a,a+n);
    int prev_sum = 1;
    if(a[0]!=1){
        cout<<"NO"<<endl;
            return;
    }
    for(int i = 1;i<n;i++){
         if(a[i]>prev_sum){
            cout<<"NO"<<endl;
            return;
         }
         prev_sum+=a[i];
    }
    
    
  cout<<"YES"<<endl;

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