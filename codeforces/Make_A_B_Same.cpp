#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i = 0 ;i<n;i++){
        cin>>a[i];
       // cin>>b[i];
    }
    for(int i = 0 ;i<n;i++){
       // cin>>a[i];
        cin>>b[i];
    }
    int ca = 0;
    int cb = 0;
  for(int i = 0;i<n;i++){
    if(a[i] == 1) ca++;
    //if(b[i] == 1) cb++;
  }
   for(int i = 0;i<n;i++){
  //  if(a[i] == 1) ca++;
    if(b[i] == 1) cb++;
  }

   if(ca ==0 && cb == 0){
    cout<<"yes"<<endl;
    return;
   }

  //cout<<ca<<" "<<cb<<endl;
  if(cb>ca && ca!=0){
    cout<<"yes"<<endl;
  }
  else{
    cout<<"no"<<endl;
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