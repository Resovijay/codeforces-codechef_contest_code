#include<bits/stdc++.h>
using namespace std;
#define int long long
int sol(int a[][],int h,int w, int i , int j){
   if(i==0 && j==0) return 1;
   if(i<0|| j<0) return 0;

   int up = sol(a,h,w,i-1,j);
   int left = sol(a,h,w,i,j-1);
   return up+left;
}
void solve(){
    int h,w;
    cin>>h>>w;
    int a[h][w];
    for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
            cin>>a[i][j];
        }
    }
   
  int ans = sol(a,h,w,h-1,w-1);
  cout<<ans<<endl; 
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
    int t=1;
    //cin>>t;
    while(t--){
      solve();
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}