#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string s;
    cin>>s;
    string s2="314159265358979323846264338327";
    if(s.length()>30){
         cout<<"0"<<endl;
        return;
    }
    if(s[0]!=s2[0]){
        cout<<"0"<<endl;
        return;
    }
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s2[i]) count++;
        else{
        break;
    }
    }
    cout<<count<<endl;
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