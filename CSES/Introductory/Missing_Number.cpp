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
    ll n, sum;
    cin >> n;
    sum = n*(n+1)/2;
    while(cin >> n)
    {
        sum -= n;
    }
    cout << sum << "\n";
    return 0;
}
