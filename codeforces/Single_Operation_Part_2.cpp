#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    vector<int>v;
    int t;
    cin>>t;
    while(t--){
     int n;
      cin>>n;   
      string s;
      cin>>s;
      int sum = 0,q=0;
      for(int i = n-1;i>=0;i--){
        sum = sum+((s[i]-48)*pow(2,q)); 
        q++;    
      } 
      int w = sum,ans=0,X;
      for(int i = 1;i<=n;i++){
        if((sum>>i)>0)  X=sum^0;
           else X = sum^(sum>>i);
        if(X<w) {ans=i;break;}
      } 
      cout<<ans<<endl;
 }  


  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}