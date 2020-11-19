// Longest Common Subsequence
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;


ll lcs(vector<char> s1, vector<char> s2){
    ll arr[s1.size()+1][s2.size()+1];
    for(ll i=0;i<s1.size()+1;i++){
        for(ll j=0;j<s2.size()+1;j++){
            if(i==0 || j==0)
                arr[i][j]=0;
            else{
                if(s1[i-1] == s2[j-1])
                    arr[i][j] = arr[i-1][j-1] + 1;
                else{
                    arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
                }
            }
        }

    }
    

    return arr[s1.size()][s2.size()];
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    string str;
    cin>>str;
    vector<char> s, alphaOrder;
    char counter = 'a';
    char temp;
    for(int i=0;i<str.length();i++)
        s.push_back(str[i]);
    ll n= s.size();
    rep(i, 0, 26){
        temp = 'a' + i;
        alphaOrder.push_back(temp);
    }
    cout<<26-lcs(s, alphaOrder);

    
}
