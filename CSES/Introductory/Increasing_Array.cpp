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
    cin >> v[0];
    ll req = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
        if (v[i] < v[i - 1])
        {
            req += abs(v[i] - v[i - 1]);
            v[i] = v[i - 1];
        }
    }

    cout << req;

    return 0;
}
