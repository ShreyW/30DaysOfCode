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
    int n;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    sort(all(v));
    int med = n/2;
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        ans += abs(v[i]-v[med]);
    }  
    cout << ans;
    return 0;
}
