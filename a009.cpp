# include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin,s); 
    for(int i=0;i<s.size();i++){
    	cout<<(char)(s[i]-7);
	}
	return 0;
}
