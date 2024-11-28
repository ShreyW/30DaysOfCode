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

// Collatz Conjecture
int main()
{
    ll n;
    cin >> n;
    while(n>1){
        cout << n << " ";
        if(n&1)
          n = 3*n+1;
        else n /=2;
    }
    cout << n;
    return 0;
}
