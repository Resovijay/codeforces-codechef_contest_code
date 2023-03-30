#include<iostream>
using namespace std;
int main(){
    
    int n,a[100];
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    while(m--){
      int x,y;
      cin>>x>>y;
      x--;
      if(x == 0){
      a[x+1] += a[x] - y;
      a[x] = 0;
      }
     else if(x == n-1){
      a[x-1] += y - 1;
      a[x] = 0;
      }
      else{
      a[x + 1] += a[x] - y;
      a[x - 1] += y-1;
      a[x] = 0;
      }
    }

    for(int i = 0;i<n;i++){
        cout<<a[i]<<endl;
    }
   return  0;
}