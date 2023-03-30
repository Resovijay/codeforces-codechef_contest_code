#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,m;
    cin>>n>>m;
    vector<string>s(n);
    for(auto &it: s){
        cin>>it;
    }


    vector<vector<bool>>vis(n,vector<bool>(m,false));

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(!isdigit(s[i][j])) continue;
            int power = s[i][j]-'0';
            for(int newrow = 0;newrow<n;newrow++){
                for(int newcol = 0;newcol<m;newcol++){
                    if(abs(i-newrow)+abs(j-newcol)<=power){
                        vis[newrow][newcol]=true;
                    }
                }
            }
        }
    }


for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        if(vis[i][j]) s[i][j]='.';
    }
}
    for(auto &it: s){
        cout<<it<<endl;
    }

}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t = 1 ;
    //cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}