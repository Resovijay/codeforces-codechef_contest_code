#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int a,b;
    cin>>a>>b;
    int k,m;
    cin>>k>>m;
    int A[100000000],B[1000000000];
    for(int i = 1;i<=a;i++){
        cin>>A[i];
    }
    for(int i = 1;i<=b;i++){
        cin>>B[i];
    }
    if(A[k]<B[b-m+1]) cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;
}