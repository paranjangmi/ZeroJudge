# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	map<int,vector<string>> mp;
	int n,outn=0,idx=0,arr[3]={0,0,0},cnt=0,plr=0,p;
	string s;
	for(int k=0;k<9;k++){
		cin>>n;
		vector<string> vc;
		for(int i=0;i<n;i++){
			cin>>s;
			vc.push_back(s);
		}
		mp[k]=vc;
	}
	cin>>n;
	while(outn<n){
		idx=plr/9;
		p = plr%9;		
		if(mp[p][idx]=="SO" || mp[p][idx]=="FO" || mp[p][idx]=="GO"){
			outn++;
			if(outn%3==0){
				memset(arr,0,sizeof(arr));
			}
		}else if(mp[p][idx]=="1B" || mp[p][idx]=="2B" || mp[p][idx]=="3B"){
			int num = mp[p][idx].at(0)-'0';
			for(int i=3-num;i<3;i++){
				cnt+=arr[i];
				arr[i]=0;
			}
			for(int i=2;i>=num;i--){
				arr[i]=arr[i-num];
				arr[i-num]=0;
			}
			arr[num-1]=1;
		}else{
			cnt+=1;
			for(int i=0;i<3;i++){
				cnt+=arr[i];
			}
			memset(arr,0,sizeof(arr));
		}
		plr++;
	}
	cout<<cnt<<endl;
	
	return 0;
}
