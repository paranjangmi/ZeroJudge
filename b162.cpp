# include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	map<int,int> mp;
	cin>>n;
	while(n--){
		cin>>x;
		mp[x]++;		
	}
	for(auto i:mp){
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	return 0;
}
