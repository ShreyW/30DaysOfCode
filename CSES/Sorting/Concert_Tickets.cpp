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
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    vi prices(n);
    for (int j = 0; j < n; j++)
    {
        int x;
        cin >> x;
        tickets.insert(x);
    }
    for (int i = 0; i < m; i++)
        cin >> prices[i];
    for (int i = 0; i < m; i++)
    {
        auto it = tickets.upper_bound(prices[i]);
        if (it == tickets.begin())
        {
            cout << "-1\n";
        }
        else
        {
            it--;
            cout << *it << "\n";
            tickets.erase(it);
        }
    }
    return 0;
}
