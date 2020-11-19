#include<bits/stdc++.h>


using namespace std;
int main(){
    long long t,x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        long long ans; 
        b = min(a+a,b);
        
        ans = (min(x,y)*b) + (max(x,y)-min(x,y))*a;

        cout<<ans<<endl;
        

    }
    return 0;

    
}