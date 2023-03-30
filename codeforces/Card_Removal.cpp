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
        cin >> n;
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mpp[x]++;
        }
        int count = 0;
        for (auto i : mpp)
        {
            if (i.second >= count)
            {
                count = i.second;
            }
        }
        cout << n - count << endl;
}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}