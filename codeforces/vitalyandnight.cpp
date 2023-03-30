#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n,m,count = 0;
    cin>>n>>m;
    int arr[n][2*m];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<2*m;++j)
        {

            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<2*m;j = j+2)
        {
            if(arr[i][j]==1 || arr[i][j+1] == 1) count++;
        }
    }
     cout<<count<<endl;

    return 0;
}