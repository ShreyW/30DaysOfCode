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
        if((a+b)%3)
            cout << "NO\n";
        else{
            ll f = 2*a-b;
            ll s = 2*b-a;
            if(f < 0 || s < 0 || f%3 || s%3)
                cout << "NO\n";
            else
                cout << "YES\n";            
        }
    }
    return 0;
}
