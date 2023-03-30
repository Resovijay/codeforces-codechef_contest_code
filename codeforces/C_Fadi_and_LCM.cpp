#include<bits/stdc++.h>
using namespace std;
#define int long long
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int x;
    cin >> x;
    int  ans;
    for(int  i = 1 ; i * i <= x ; i++){
        if(x % i == 0 && lcm(i, x / i) == x){
            ans = i;
        }
    }
    cout << ans << " " << x / ans << endl;
   
}
signed main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
solve();
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}