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
    int n,m;
    cin>>n>>m;
    char a[n][m];
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         cin>>a[i][j];
         if(a[i][j]=='#') count++;  
        }
    }
    cout<<count<<endl;
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}