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
      int a = 0;
       int b = sqrt(n);
       int x ;
       bool check=false;
       while(a<=b){
        //calculation
        x = a*a+b*b;
        if(x<n) a++;
        else if(x>n) b--;
        else{
          check = true;
          break;
        }
       }
       if(check) cout<<a<<" "<<b<<endl;
       else cout<<"-1"<<endl;
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}