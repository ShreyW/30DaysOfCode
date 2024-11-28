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
    ll sum = n * (n + 1) / 2;
    if (sum & 1)
        cout << "NO\n";
    else
    {
        ll sum = n * (n + 1) / 4;
        vi f, s;
        for (int i = n; i >= 1 ; i--) // Reverse start so that invariant remains
        {
            if ((sum - i) >= 0)
            {
                f.push_back(i);
                sum -= i;
            }
            else
            {
                s.push_back(i);
            }
        }
        cout << "YES\n"
             << f.size() << "\n";
        for (int i = 0; i < f.size(); i++)
            cout << f[i] << " ";
        cout << "\n";
        cout << s.size() << "\n";
        for (int i = 0; i < s.size(); i++)
            cout << s[i] << " ";
    }
    return 0;
}
