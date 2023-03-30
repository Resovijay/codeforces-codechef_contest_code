#include<bits/stdc++.h>
using namespace std;
#define int long long
bool ispal(int arr[],int n){
    int l = 0,h =n-1;
    while(l<=h){
        if(arr[l]!=arr[h]) return false;
        l++;
        h--;
    }
    return true;
}
bool ispali(string s,int n){
    int l = 0,h =n-1;
    while(l<=h){
        if(s[l]!=s[h]) return false;
        l++;
        h--;
    }
    return true;
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
      int n;
      cin>>n;
      int a[n];
      for(int i =0;i<n;i++){
        cin>>a[i];
      }
      string s;
      cin>>s;
    bool check1 = false;
    bool check2 = false;
    if(ispal(a,n)){
        check1=true;
    }
    if(ispali(s,n)){
        check2=true;
    }
    if((check1==true&&check2==true)||(check1==false&&check2==false)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

}
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}