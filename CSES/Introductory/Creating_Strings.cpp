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

string s;
vector<string> perms;
int c[26];

void solve(string curr)
{
    if (curr.size() == s.size())
    {
        perms.push_back(curr);
        return;
    }
    for (int i = 0; i < 26; i++)
    {
        if (c[i])
        {
            c[i]--;
            solve(curr+char('a' +i));
            c[i]++;
        }
    }
}
int main()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        c[s[i] - 'a']++;
    solve("");
    cout << perms.size() << "\n";
    for (auto x : perms)
        cout << x << "\n";
    return 0;
}
