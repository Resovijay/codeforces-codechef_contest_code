#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string temp ="FBFFBFFB";
  string s="";
    for(int i = 1;i<=20;i++){
        s+=temp;
    }
    int n;
    cin>>n;
    string sub;
    cin>>sub;
    if(s.find(sub)==string::npos){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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