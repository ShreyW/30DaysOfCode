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
ll mod = 1e9+7;
int main()
{
    ll n;
    cin >> n;
    ll ans = 1;
    for(int i=1;i<=n;i++)
    {
        ans *= 2;
        ans %= mod;
    }
    cout << ans  ;
    return 0;
}
