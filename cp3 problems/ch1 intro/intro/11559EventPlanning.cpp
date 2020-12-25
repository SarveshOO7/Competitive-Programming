//Easy
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll INF = 201*10000;
int main(){
    ll n, b, h, w;
    while(cin>>n>>b>>h>>w){
        ll minPrice = INF;      
        for(int i=0;i<h;i++){

            ll price, temp;
            bool isValid= false;
            cin>>price;
            for(int i=0;i<w;i++){
                cin>>temp;
                if(temp>n) isValid = true;
            }
            if(price*n >b) continue;
            if(isValid){
                minPrice = min(minPrice, price*n);
            }
        }
        if(minPrice == INF)
            cout<<"stay home";
        else
            cout<<minPrice;
        cout<<endl;
    }
    return 0;
}