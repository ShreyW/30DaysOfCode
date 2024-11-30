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
    vi v(n), pos(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pos[v[i]-1] = i;
    }
    int round = 1;
    for (int i = 1; i < n; i++)
    {
        if (pos[i] < pos[i - 1])
            round++;
    }
    cout << round;
    return 0;
}
