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
    ll n, temp1, temp2;
    cin>>n;
    vector< pii > nums;
    vector< set < set < int > >> arr;
    rep(i, 0, n){
        cin>> temp1>>temp2;
        nums.push_back(make_pair(temp1, temp2));
    }
    rep(i, 0, n){
        set< int> temp;
        temp.insert(nums[i].first + nums[i].second);
        temp.insert(nums[i].first - nums[i].second);
        temp.insert(nums[i].first * nums[i].second);
        if(i!=0){
            for(auto s :  arr[i-1]){
                
            }
        }

    }


    
}
