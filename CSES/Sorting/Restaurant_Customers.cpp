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
    int n;
    cin >> n;
    vector<pii> times(2*n);
    for(int i=0;i<2*n;i+=2){
        int a,b;
        cin >> a >> b;
        times[i] = {a,1};
        times[i+1] = {b,-1};
    }
    sort(all(times));   
    int count= 0, mx = 0;
    for(int i=0;i<2*n;i++)
    {
        // cout << times[i].first << " " << times[i].second << "\n";
        if(times[i].second == 1){
            count++;
        }
        else{
            count--;
        }
        mx = max(mx, count);
    }
    cout << mx;

    return 0;
}
