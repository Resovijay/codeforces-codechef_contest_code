#include<bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
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
      int a,b,n,p,q;
      cin>>a>>b>>n;
      int count1=0,count2=0;
      while(n>=0){
    q = gcd(a,n);
    n = n-q;
    count1++;
    p = gcd(b,n);
    n=n-p;
    count2++;
      }
      if(count1>count2)cout<<"1"<<endl;
      else cout<<"0"<<endl;

}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}