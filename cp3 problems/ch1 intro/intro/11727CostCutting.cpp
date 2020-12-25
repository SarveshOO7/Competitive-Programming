// Super Easy
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t, i=1, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y>> z;
        cout<<"Case "<<i<<": "<<x+y+z - max(x, max(y,z)) - min(x, min(y, z))<<endl;
        i++;
    }
    return 0;
}