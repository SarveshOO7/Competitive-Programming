//Super easy
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>b)
            cout<<">";
        else if(b>a)
            cout<<"<";
        else
            cout<<"=";
        cout<<"\n";
    }

    return 0;
}