#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n ;
    cin>>n;
    if(n%2!=0){
        for(int i=0;i<n;i++){
            cout<<"1"<<" ";
        }cout<<endl;
    }
    else{
        cout<<1<<" "<<3<<" ";
        for(int i =0 ;i<n-2;i++){
            cout<<"2"<<" ";
        }cout<<endl;

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