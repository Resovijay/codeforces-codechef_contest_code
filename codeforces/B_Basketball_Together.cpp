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
//     int t;
//     cin>>t;
//     while(t--){
// }
int n,d;
cin>>n>>d;
int a[n];
for(int i = 0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
int i = 0,j=n-1,ans = 0;
while(j>=i){
    int s = 1;
    while(s*a[j]<=d && j>=i){
        i++;
        s++;
    }
    if(s*a[j]>d && j>=i)
        ans++;
        j--;
}
cout<<ans<<endl;
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}