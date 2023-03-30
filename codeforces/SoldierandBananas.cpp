#include<bits/stdc++.h>
using namespace std;
int main (){
    int k,n,w,ans,sum = 0;
    cin>>k>>n>>w;
    for(int i = 1;i<=w;i++){
       ans = i*k;
       sum = sum + ans;
    }
    if((sum-n)>=0){
        cout<<sum - n<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
  return 0;
}