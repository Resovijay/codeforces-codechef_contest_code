#include<bits/stdc++.h>
using namespace std;
#define int long long
int power(int a,int b){
    int ans = 1;
    while(b!=0){
        if(b%2!=0){
            ans=ans*a;
            b =b-1;
        }
        else{
              b =b/2;
              a =a*a;
        }
    }
    return ans;
}
void solve(){
    int n;
    cin>>n;
    int i ;
    for(i = 2;i<1e6;i++){
        if(n%(power(2,i)-1)==0){
          cout<<n/(power(2,i)-1)<<endl;         
          break;
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