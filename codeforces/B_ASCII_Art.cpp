#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int h,w;
    cin>>h>>w;
        for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            int  x;
            cin>>x;
            if(x==0) {
                cout<<".";
            }
            else{
                char t = 'A'+x-1;
                cout<<t;
            }
        }
        cout<<endl;
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