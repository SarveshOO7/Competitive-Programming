#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    ll n, temp, ans=0;
    set< ll > s;
    cin>>n;
    vector< ll > v;
    for(ll i=0;i<n;i++){
        cin>>temp;
        v.push_back(++temp);
        s.insert(temp);
        if(temp>ans)
            ans=temp;
    }
    ans+=v.size() - s.size() + 1;
    cout<<ans;
    
    
}
