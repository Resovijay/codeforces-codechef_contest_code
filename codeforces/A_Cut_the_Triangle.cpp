#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    set<int>st1;
    set<int>st2;
    st1.insert(x1);
    st1.insert(x2);
    st1.insert(x3);
    st2.insert(y1);
    st2.insert(y2);
    st2.insert(y3);


if(st1.size()==3||st2.size()==3){
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