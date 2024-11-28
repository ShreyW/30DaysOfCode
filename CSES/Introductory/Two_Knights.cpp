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
    for(ll i=1;i<=n;i++)
    {
        cout << i*i*(i*i-1)/2 - 4*(i-1)*(i-2) << "\n"; // Placing 2x3 and 3x2 boards
    }
    return 0;
}
