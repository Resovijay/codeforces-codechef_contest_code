#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0; 
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
   int check  = 0;
   int i =0;
   while(i<n-1){
        if(a[i]==-1){
            check = 1;
            if(a[i+1]==-1){
                check = 2;
                break;
            }
            i++;
        }
        //i++;
   }

   if(check==2) {
    sum+=4;
    //cout<<sum<<endl;
   }

   else if(check==0) {
    sum-=4;
    // cout<<sum<<endl;
   }
   cout<<sum<<endl;
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