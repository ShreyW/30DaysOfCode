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
    string s;
    cin >> s;
    int len = 1;
    int mx = 1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1] == s[i])
            len++;
        else
            len = 1;
        mx = max(mx, len);
    }
    cout << mx ;
    return 0;
}
