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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];
    sort(all(a));
    sort(all(b));
    int i = 0, j = 0, count = 0;
    while(i<n && j<m)
    {
        if(abs(a[i] - b[j]) <= k)
        {
            count++;
            i++;
            j++;
        }
        else if(a[i] > b[j])
            j++;
        else if(a[i] < b[j])
            i++;
    }
    cout << count;
    return 0;
}
