#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
  int n;
  cin>>n;
  if(n==1||n==2){
    cout<<-1<<endl;
    return;

  }
  if(n%2!=0){                                                                                                             
      cout<<(n*n+1)/2<<" "<<(n*n-1)/2;
  }
  else{
     cout<<(n*n+4)/4<<" "<<(n*n-4)/4;
  }
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
    solve();
// }
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}