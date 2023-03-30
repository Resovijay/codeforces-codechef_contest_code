#include <iostream>
using namespace std;
int solve(int n){
    int OR = 1;
    for(int i = 1;i<=n;i++){
     OR = OR||i;   
    }
    return OR;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i =2 ;i<=n;i++){
	        int count = 0;
	        int p = solve(i);
            cout<<p<<endl;
	        int q = solve(i-1);
            cout<<q<<endl;
	        if(p == q) {
	            count++;
	        }
	        cout<<count<<endl;
	    }
	}
	return 0;
}
