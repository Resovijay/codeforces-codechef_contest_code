#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , c ,x;
    cin>>n>>c;
    vector<int> v;
    for(int i = 0; i<n ;i++){
        cin>>x;
        v.push_back(x);
    }
    int count = 1;
    for(int i = 1;i<n;i++){
        if((v[i] - v[i-1])<=c){
            count++;
        }
        else if((v[i] - v[i-1])>c){
            count = 1;
        }
    }
    cout<<count<<endl;
    return 0;
}