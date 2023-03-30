#include<bits/stdc++.h>
using namespace std;
#define int long long

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
      int n;
      cin>>n;
      int a[n];
      for(int i = 0;i<n;i++){
        cin>>a[i];
      }
      int count=0;
      for(int i =1;i<n;i++){
         if((a[i]==0)&&(a[i-1]==1)) count++;
      }
      cout<<count<<endl;
}

  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}