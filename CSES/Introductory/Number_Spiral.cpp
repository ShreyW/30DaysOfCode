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
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll mx = max(a,b);
        ll mn = min(a,b);
        ll ans = 0;
        if(mx & 1)
        // Symmetry when we flip
        {
            if(mx == a)
                ans = mx*mx - 2*mx + 1 + mn;
            else
                ans = mx*mx - mn + 1;
        }
        else{
            if(mx == a)
                ans = mx*mx - mn + 1;
            else
                ans = mx*mx - 2*mx + mn + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
