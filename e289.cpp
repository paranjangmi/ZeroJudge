# include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	unordered_map<string,int> mp;
	while(cin>>n>>m){
		string s[m];
		int cnt=0,ans;
		mp.clear();
		for(int i=0;i<m;i++){
			cin>>s[i];
		}
		for(int i=0;i<n;i++){
			if(!mp[s[i]]) cnt++;
			mp[s[i]]++;
		}
		ans = (cnt==n);
		for(int L=0,R=n;R<m;L++,R++){
			mp[s[L]]--;
			if(mp[s[L]]==0) cnt--;
			if(mp[s[R]]==0) cnt++;
			mp[s[R]]++;
			ans+=(cnt==n);
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
