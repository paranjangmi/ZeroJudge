# include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s,emp;
	int prime[100];
	for(int i=0;i<100;i++) prime[i]=1;
	prime[0]=0, prime[1]=0;
	for(int i=2;i<100;i++){
		if(prime[i]&&i*i<100){
			for(int j=i*i;j<100;j+=i){
				prime[j]=0;
			}
		}
	}
	while(cin>>s){
		int c[26],maxn,minn;
		for(int i=0;i<26;i++) c[i]=0;
		for(int i=0;i<s.size();i++){
			c[s[i]-'a']++;
		}
		sort(c,c+26);
		maxn = c[25];
		for(int i=0;i<26;i++){
			if(c[i]>0){
				minn = c[i];
				break;
			}
		}
//		cout<<emp<<endl;
		if(prime[maxn-minn]) cout<<"Lucky Word\n"<<maxn-minn<<endl;
		else cout<<"No Answer\n0"<<endl;
	
	}
	
	
	
	return 0;
}
