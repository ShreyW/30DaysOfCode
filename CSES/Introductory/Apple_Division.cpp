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
ll sum = 0, ans = INT_MAX;
void solve(vll &v, int index, ll running_sum)
{
    if(index == v.size()){
        ans = min(ans, abs(2*running_sum-sum));
        return;
    }
    solve(v, index+1, running_sum+v[index]);
    solve(v, index+1, running_sum);
}
int main()
{
    int n;
    cin >> n;
    vll v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum += v[i];
    }
    solve(v, 0, 0);
    cout << ans << "\n";     
    return 0;
}
