#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef vector<pii> vii;

void setIO(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    int n, x;
    cin >> n >> x;
    vll v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    set<ll> s(all(v));
    ll a = -1, b = -1;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (s.find(x - *it) != s.end())
        {
            a = *it;
            b = x - *it;
            goto end;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;

end:
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] == a)
        {
            a = i + 1;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == b && i + 1 != a)
        {
            b = i + 1;
            cout << a << " " << b << "\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}
}