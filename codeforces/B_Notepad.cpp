#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<pair<char,char>,int>mpp;
    pair<char,char>pp={s[0],s[1]};
    mpp[pp]++;
    for(int i=2;i<n;i++){
        pair<char,char>pair={s[i-1],s[i]};
        if(mpp[pair]!=0){
            if((pp==pair&&mpp[pair]>1)||(pair!=pp)){
                cout<<"YES"<<endl;
                return;
            }
        }
        pp=pair;
        mpp[pp]++;
    }
        cout<<"NO"<<endl;
    
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