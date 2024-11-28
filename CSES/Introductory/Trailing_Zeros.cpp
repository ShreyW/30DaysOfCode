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
    ll n;
    cin >> n;
    ll count = 0;
    // [n/5] + [n/25] + [n/125] + ...
    for(int i=5; i<=n; i*=5)
    {
        count += n/i;
    }
    cout << count;
    return 0;
}
