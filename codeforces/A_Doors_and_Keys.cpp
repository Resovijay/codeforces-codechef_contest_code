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
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      map<char,int>mpp;
      int ans = 0;
      for(int i = 0;i<s.length();i++){
        if(s[i]>='a'&& s[i]<='z') mpp[s[i]]++;
        else{
            char ch=s[i]+32;
            if(mpp[ch]==0){
                ans=1;
                break;
            }
        }
      }
      if(ans==0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}