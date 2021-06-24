#include<bits/stdc++.h>
using namespace std;

int main(){
  	int y,t;
  	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>y;
		cout<<"Case "<<i<<": ";
		if(y%4==0 && y%100!=0 || y%400==0) cout<<"a leap year";
		else cout<<"a normal year";
		cout<<endl;
	}
	
	
	return 0;
}
