/*logic------humlog ko woh pair khojna hai jo string or uska reverse ho ...*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    set<string>st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        st.insert(v[i]);
    }
    vector<string>left,right;
    string mid;
    for(int i=0;i<n;i++){
        string t;
        t = v[i];
        reverse(t.begin(),t.end());
        if(t==v[i]) mid = t;
        else if(st.find(t)!=st.end()){
            left.push_back(v[i]);
            right.push_back(t);
            st.erase(v[i]);
            st.erase(t);
        }
    }
    cout<<left.size()*m*2+mid.length()<<endl;
 for(auto it:left){
    cout<<it;
 }
 cout<<mid;
 reverse(right.begin(),right.end());
 for(auto it:right){
     cout<<it;
 }cout<<endl;
}
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
solve();
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}