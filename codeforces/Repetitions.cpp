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
//     int t;
//     cin>>t;
//     while(t--){
      
// }
 string s;
 cin>>s;
 int res=0,count=1,ans=0;
 for(int i =0;i<s.length()-1;i++){
    if(s[i]!=s[res]) {
        count++;
        ans = max(ans,count);
    }
    else count--;
    if(count==0){
        res=i;
        count=1;
    }
    //cout<<ans<<endl;
 }
   cout<<ans<<endl;
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}