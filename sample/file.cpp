#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b, ans=0, blu,y,g;
	cin>>a>>b;
	cin>>y>>g>>blu;
	a-=(y*2);
	a-=g;
	b-=g;
	b-=3*blu;
	if(a<0)
		ans+=(-a);
	if(b<0)
		ans+=(-b);
	cout<<ans;
	
	return 0;
}