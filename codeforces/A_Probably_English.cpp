#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<string>v;
    for(int i = 0 ;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
    }
   
   int flag = 0;
   for(int i = 0;i<n;i++){
   if(v[i]=="and"||v[i] == "not"|| v[i] =="that"||v[i]=="the"||v[i]=="you"){
        flag = 1 ;
        break;
   }
   }

   if(flag){
    cout<<"Yes"<<endl;
   }
   else{
    cout<<"No"<<endl;
   }
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t = 1;
    //cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}