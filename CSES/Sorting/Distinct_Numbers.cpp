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
    int ans = 1;
    int prev = v[0];
    for(int i=0;i<n;i++)
    {
        if(v[i] != prev)
        {
            ans++;
            prev=v[i];
        }
    }
    cout << ans << "\n";
    return 0;
}
