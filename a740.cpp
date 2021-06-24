#include <bits/stdc++.h>
using namespace std;

 
int main() {
    
    int n,t=0;
    while(cin>>n){
    	int ns = sqrt(n);
    	for(int i=2;i<=ns;i++){
	    	while(n%i==0){
	    		n/=i;
	    		t+=i;
			}
		}
		if(n!=1) t+=n;
		cout<<t<<endl;
		t=0;
	}
    
    return 0;
}
