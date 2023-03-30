#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n; 
    cin>>n;
    vector<int>v(n);
    vector<int>odd;
    vector<int>even;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i]; 
        if(v[i]%2!=0) odd.push_back(v[i]); 
        else even.push_back(v[i]);
    } 
    if(sum%2==0){
        cout<<"0"<<endl;
        return;
    }
    int count1 = 0 ;
    int count2 = 0 ;
    int miniodd = *min_element(odd.begin(),odd.end());
    int minieven = *min_element(even.begin(),even.end());
    if(odd.size()%2!=0){
    while(miniodd!=0){
        miniodd=miniodd/2;
        count1++;
    }
}
   if(even.size()%2!=0){
     while(minieven!=1){
        minieven=minieven/2;
        count2++;
    }
    cout<<min(count1,count2)<<endl;
}
else {
    cout<<count1<<endl;
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