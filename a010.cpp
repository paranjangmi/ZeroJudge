#include <bits/stdc++.h>
using namespace std;

 
int main() {
    
    int n,c=0,p=0;
    cin>>n;
    for(int i=2;i<=n;i++){
    	while(n%i==0){
    		p++;
    		c++;
    		n/=i;
		}
		if(c>1){
			if(p==c)
				cout<<i<<"^"<<c;
			else
				cout<<" * "<<i<<"^"<<c;
			
			c=0;
		}else if(c==1){
			if(p==c)
				cout<<i;
			else
				cout<<" * "<<i;
			c=0;
		} 
		
	}
    return 0;
}
