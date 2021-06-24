# include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d = pow(b,2)-4*a*c;
	if(d<0) cout<<"No real root\n";
	else if(d==0) cout<<"Two same roots x="<<-b/(2*a)<<endl;
	else{
		x1 = (-b+sqrt(d))/(2*a);
		x2 = (-b-sqrt(d))/(2*a);
		cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<endl;
	}
	return 0;
}
