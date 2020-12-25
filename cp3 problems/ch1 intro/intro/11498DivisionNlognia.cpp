// Super Easy
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    do
    {
        ll t, n, m, x, y;
        cin >> t;
        if (t == 0)
            break;
        cin >> n >> m;
        while (t--)
        {
            cin >> x >> y;
            if (x == n || y == m)
            {
                cout << "divisa\n";
                continue;
            }
            if (y > m)
                cout << "N";
            else
                cout << "S";
            if (x > n)
                cout << "E";
            else
                cout << "O";
            cout << "\n";
        }
    } while (1);
    return 0;
}