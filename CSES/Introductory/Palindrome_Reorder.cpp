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
    int n = s.size();
    int num_odds = 0, pos = 0;
    vi c(26);
    for (int i = 0; i < n; i++)
        c[s[i] - 'A']++;
    for (int i = 0; i < 26; i++){
        // cout << c[i] <<" ";
        if (c[i] % 2)
        {
            num_odds++;
            pos = i;
        }
    }
    if (n & 1)
    {
        if (num_odds != 1)
            cout << "NO SOLUTION\n";
        else
        {
            string ans = "";
            for (int i = 0; i < 26; i++)
            {
                for(int j=0;j<c[i]/2;j++)
                {
                    ans += 'A'+i;
                }                    
            }
            string copy = ans;
            ans += 'A'+pos;
            reverse(all(copy));
            ans += copy;
            cout << ans << "\n";
        }
    }
    else
    {
        if (num_odds)
            cout << "NO SOLUTION\n";
        else
        {
            string ans = "";
            for (int i = 0; i < 26; i++)
            {
                for(int j=0;j<c[i]/2;j++)
                {
                    ans += 'A'+i;
                }                    
            }
            string copy = ans;
            reverse(all(copy));
            ans += copy;
            cout << ans << "\n";
        }
    }
    return 0;
}
