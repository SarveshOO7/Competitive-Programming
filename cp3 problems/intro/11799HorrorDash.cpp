//Easy (in my opinion should be super easy)
// Hint: Find max
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t, temp;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll n;
        vector<ll> v;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        cout << "Case " << i << ": " << *max_element(v.begin(), v.end()) << endl;
    }

    return 0;
}