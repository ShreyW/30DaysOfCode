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
    vll v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    ll mx = v[0];
    ll sum = v[0];
    for(int i=1;i<n;i++)
    {
        sum = max(sum+v[i],v[i]);
        // cout << sum << " ";
        mx = max(mx, sum);
    }
    cout << mx;
    return 0;
}
