#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int>v;
    vector<int>ans;
    for(int i = 0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(v[j]>v[i]){
               count++;
            }
        }
        ans.push_back(count + 1);
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}