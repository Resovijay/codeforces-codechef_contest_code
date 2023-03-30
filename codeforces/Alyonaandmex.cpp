#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mini = INT32_MAX;
    for(int i = 0;i<m;i++){
        int l,r;
        cin>>l>>r;
        mini = min(mini,r-l+1);
    }
    cout<<mini<<endl;
    int a = 0;
    vector<int>v;
    for(int i = 0;i<n;i++){
       v.push_back(a++);
       if(a == mini) a=0;
    }
    for(auto it:v){
        cout<<it<<" ";
    }
 return 0;
}