#include <bits/stdc++.h>
using namespace std;

 
int main() {
    
    int t;
    int a,b,c,d;
    cin>>t;
    while(t--){
    	cin>>a>>b>>c>>d;
    	if((b-a)==(d-c)){
    		cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+(d-c)<<endl;
		}else{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*(d/c)<<endl;
		}
	}
	    
    return 0;
}
