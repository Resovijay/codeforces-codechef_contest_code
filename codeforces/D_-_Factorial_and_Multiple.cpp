#include<bits/stdc++.h>
using namespace std;
#define int long long

int fact[1000000];

void factorial(){
    fact[0]=1;
    int ans=1;
    for(int i=1;i<1000000;i++){
        ans=ans*i;
        fact[i]=ans;
    }
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
       int n;
       cin>>n;
    //    int i;
    //    for( i=1;i<1000000;i++){
    //     int p = fact[i];
    //     if(p%n==0) break;
    //    }
    //   cout<<i<<endl;
    cout<<fact[n]<<endl;
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}