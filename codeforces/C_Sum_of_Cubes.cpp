#include<bits/stdc++.h>
using namespace std;
#define int long long
 map<int,int>mpp;
void precomp(){
   mpp[0]=0;
  for(int i=1;i<=10001;i++){
   mpp[i*i*i]++;
  }
}
void solve(){
   int n;
   cin>>n;
   int c = cbrt(n);
   int flag = 0;
   for(int i = 1;i<=10000;i++){
      if(flag){
         break;
      }
      int z = i*i*i;
      if(z>=n){
         break;
      }
      if(mpp.find(n-z)!=mpp.end()){
         flag =1;
         break;
      }
   }
   if(flag){
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


  precomp();

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