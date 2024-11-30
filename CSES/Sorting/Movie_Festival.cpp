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

bool cmp(pii a, pii b){
    if(a.second != b.second) return a.second < b.second;
    return a.first < b.first;

}
int main()
{
    int n;
    cin >> n;
    vector<pii> movies(n);
    for(int i=0;i<n;i++)
    {
        int a, b;
        cin >> a >> b;
        movies[i] = {a,b};
    }
    sort(all(movies), cmp);
    int count = 1;
    int time = movies[0].second;
    for(int i=1;i<n;i++)
    {
        if(movies[i].first < time)
            continue;
        else{
            time = movies[i].second;
            count++;
        }
    }
    cout << count;
    return 0;
}
